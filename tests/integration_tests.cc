#include <iostream>
#include <grpcpp/grpcpp.h>
#include <chrono>
#include <thread>
#include "Base.hh"
#include "../proto/clarifai/api/resources.pb.h"
#include "../proto/clarifai/api/service.grpc.pb.h"
#include "../proto/clarifai/api/service.pb.h"

using namespace std;
using namespace clarifai::api;

string GENERAL_MODEL_ID = "aaa03c23b3724a16a56b629203edc62c";
string DOG_IMAGE_URL = "https://samples.clarifai.com/dog2.jpeg";
string TRUCK_IMAGE_URL = "https://samples.clarifai.com/red-truck.png";
string NON_EXISTING_IMAGE_URL = "https://samples.clarifai.com/non-existing-image.jpeg";

void assertSuccessResponse(const grpc::Status& status, const status::Status& response_status) {
    if (!status.ok()) {
        FAIL("Failure: " + to_string(status.error_code()) + " " + status.error_message())
    }

    if (response_status.code() != status::StatusCode::SUCCESS) {
        FAIL(
                "Error response: " +
                to_string(response_status.code()) + " " +
                response_status.description() + " " +
                response_status.details()
        )
    }
}

unique_ptr<V2::Stub> makeStub() {
    unique_ptr<V2::Stub> stub;
    stub = V2::NewStub(
            grpc::CreateChannel("api.clarifai.com:443", grpc::SslCredentials(grpc::SslCredentialsOptions()))
    );
    return stub;
}

unique_ptr<grpc::ClientContext> makeContext() {
    unique_ptr<grpc::ClientContext> context(new grpc::ClientContext);
    string api_key = getenv("CLARIFAI_API_KEY");
    context->AddMetadata("authorization", "Key " + api_key);
    return context;
}

void testGetModel()
{
    GetModelRequest request;
    request.set_model_id(GENERAL_MODEL_ID);

    SingleModelResponse response;

    grpc::Status status = makeStub()->GetModel(makeContext().get(), request, &response);
    assertSuccessResponse(status, response.status());

    ASSERT_EQUAL("general", response.model().name());
}

void testListModelsWithPagination()
{
    ListModelsRequest request;
    request.set_page(1);
    request.set_per_page(5);

    MultiModelResponse response;
    grpc::Status status = makeStub()->ListModels(makeContext().get(), request, &response);

    assertSuccessResponse(status, response.status());

    ASSERT_EQUAL(5, response.models_size());
}

void testPostModelOutputsWithUrl()
{
    PostModelOutputsRequest request;
    request.set_model_id(GENERAL_MODEL_ID);

    Input* input = request.add_inputs();
    Data* data = input->mutable_data();
    Image* image = data->mutable_image();
    image->set_url(DOG_IMAGE_URL);

    MultiOutputResponse response;
    grpc::Status status = makeStub()->PostModelOutputs(makeContext().get(), request, &response);

    assertSuccessResponse(status, response.status());

    ASSERT_NOT_EQUAL(0, response.outputs(0).data().concepts_size());
}

void testFailedPostModelOutputs()
{
    PostModelOutputsRequest request;
    request.set_model_id(GENERAL_MODEL_ID);

    Input* input = request.add_inputs();
    Data* data = input->mutable_data();
    Image* image = data->mutable_image();
    image->set_url(NON_EXISTING_IMAGE_URL);

    MultiOutputResponse response;
    makeStub()->PostModelOutputs(makeContext().get(), request, &response);

    ASSERT_EQUAL(status::StatusCode::FAILURE, response.status().code())
}

void testMixedSuccessPostModelOutputs()
{
    PostModelOutputsRequest request;
    request.set_model_id(GENERAL_MODEL_ID);

    request.add_inputs()->mutable_data()->mutable_image()->set_url(DOG_IMAGE_URL);
    request.add_inputs()->mutable_data()->mutable_image()->set_url(NON_EXISTING_IMAGE_URL);

    MultiOutputResponse response;
    makeStub()->PostModelOutputs(makeContext().get(), request, &response);

    ASSERT_EQUAL(status::StatusCode::MIXED_STATUS, response.status().code())
    ASSERT_EQUAL(status::StatusCode::SUCCESS, response.outputs(0).status().code())
    ASSERT_EQUAL(status::StatusCode::INPUT_DOWNLOAD_FAILED, response.outputs(1).status().code())
}

void testPostPatchDeleteInput()
{
    unique_ptr<V2::Stub> stub = makeStub();

    PostInputsRequest post_inputs_request;
    Data* data = post_inputs_request.add_inputs()->mutable_data();
    Image* image = data->mutable_image();
    image->set_url(TRUCK_IMAGE_URL);
    image->set_allow_duplicate_url(true);
    data->add_concepts()->set_id("red-truck");

    MultiInputResponse post_inputs_response;
    grpc::Status post_inputs_status = stub->PostInputs(makeContext().get(), post_inputs_request, &post_inputs_response);
    assertSuccessResponse(post_inputs_status, post_inputs_response.status());

    string input_id = post_inputs_response.inputs(0).id();

    while (true) {
        GetInputRequest get_input_request;
        get_input_request.set_input_id(input_id);

        SingleInputResponse get_input_response;
        grpc::Status get_input_status = stub->GetInput(makeContext().get(), get_input_request, &get_input_response);
        assertSuccessResponse(get_input_status, get_input_response.status());
        auto input_status_code = get_input_response.input().status().code();
        if (input_status_code == status::StatusCode::INPUT_DOWNLOAD_SUCCESS) {
            break;
        } else if (
                input_status_code == status::StatusCode::INPUT_DOWNLOAD_PENDING ||
                input_status_code == status::StatusCode::INPUT_DOWNLOAD_IN_PROGRESS
        ) {
            cout << "Input ID " << input_id << " still has status code: " << input_status_code << endl;
            this_thread::sleep_for(chrono::seconds(1));
            continue;
        }
        cout << "Waiting for input ID " << input_id << " failed, status code: " << input_status_code << endl;
        exit(1);
    }

    PatchInputsRequest patch_inputs_request;
    patch_inputs_request.set_action("overwrite");
    Input* patch_input = patch_inputs_request.add_inputs();
    patch_input->set_id(input_id);
    patch_input->mutable_data()->add_concepts()->set_id("very-red-truck");

    MultiInputResponse patch_inputs_response;
    grpc::Status patch_inputs_status = stub->PatchInputs(makeContext().get(), patch_inputs_request, &patch_inputs_response);
    assertSuccessResponse(patch_inputs_status, patch_inputs_response.status());

    DeleteInputRequest delete_input_request;
    delete_input_request.set_input_id(input_id);

    status::BaseResponse delete_input_response;
    grpc::Status delete_input_status = stub->DeleteInput(makeContext().get(), delete_input_request, &delete_input_response);
    assertSuccessResponse(delete_input_status, delete_input_response.status());
}

int main(int, char**)
{
    testGetModel();
    testListModelsWithPagination();
    testPostModelOutputsWithUrl();
    testFailedPostModelOutputs();
    testMixedSuccessPostModelOutputs();
    testPostPatchDeleteInput();
}
