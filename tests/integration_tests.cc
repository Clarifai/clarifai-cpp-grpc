#include <iostream>
#include <grpcpp/grpcpp.h>
#include "Base.hh"
#include "../proto/clarifai/api/resources.pb.h"
#include "../proto/clarifai/api/service.grpc.pb.h"
#include "../proto/clarifai/api/service.pb.h"

std::unique_ptr<grpc::ClientContext> makeContext();

using namespace std;
using namespace clarifai::api;

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

unique_ptr<clarifai::api::V2::Stub> makeStub() {
    unique_ptr<clarifai::api::V2::Stub> stub;
    stub = clarifai::api::V2::NewStub(
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

void testListModels()
{
    ListModelsRequest request;
    request.set_page(1);
    request.set_per_page(5);

    MultiModelResponse response;

    grpc::Status status = makeStub()->ListModels(makeContext().get(), request, &response);

    assertSuccessResponse(status, response.status());

    ASSERT_EQUAL(5, response.models_size());
}

int main(int, char**)
{
    testListModels();
}
