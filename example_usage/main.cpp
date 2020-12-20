#include <iostream>

#include <grpcpp/grpcpp.h>
#include <proto/clarifai/api/service.grpc.pb.h>

using namespace std;
using namespace clarifai::api;

int main() {
    auto channel = grpc::CreateChannel("api.clarifai.com:443", grpc::SslCredentials(grpc::SslCredentialsOptions()));
    unique_ptr<V2::Stub> stub = V2::NewStub(channel);

    unique_ptr<grpc::ClientContext> context(new grpc::ClientContext);
    string api_key = getenv("CLARIFAI_API_KEY");
    context->AddMetadata("authorization", "Key " + api_key);

    // This is a publicly available model.
    string GENERAL_MODEL_ID = "aaa03c23b3724a16a56b629203edc62c";

    PostModelOutputsRequest request;
    request.set_model_id(GENERAL_MODEL_ID);

    Input* input = request.add_inputs();
    Data* data = input->mutable_data();
    Image* image = data->mutable_image();
    image->set_url("https://samples.clarifai.com/dog2.jpeg");

    MultiOutputResponse response;
    grpc::Status status = stub->PostModelOutputs(context.get(), request, &response);

    if (!status.ok()) {
        cout << "Failure: " << status.error_code() << " " << status.error_message() << endl;
        exit(1);
    }

    if (response.status().code() != status::StatusCode::SUCCESS) {
        cout << "Error response: " << response.status().code() << " " << response.status().description() << " " << response.status().details() << endl;
        exit(1);
    }

    Data response_data = response.outputs(0).data();
    cout << "Predicted concepts:" << endl;
    for (int i = 0; i < response_data.concepts_size(); i++) {
        const Concept& c = response_data.concepts(i);
        cout << "\t" << c.name() << ": " << c.value() << endl;
    }

    return 0;
}

