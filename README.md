![Clarifai logo](docs/logo.png)

# Clarifai C++ gRPC Client

This is the official Clarifai gRPC C++ client for interacting with our powerful recognition [API](https://docs.clarifai.com).
Clarifai provides a platform for data scientists, developers, researchers and enterprises to master the entire
artificial intelligence lifecycle. Gather valuable business insights from images, video and text using computer vision
and natural language processing.

* Try the Clarifai demo at: https://clarifai.com/demo
* Sign up for a free account at: https://portal.clarifai.com/signup
* Read the documentation at: https://docs.clarifai.com/

[![GitHub release (latest by date)](https://img.shields.io/github/v/release/Clarifai/clarifai-cpp-grpc)](https://github.com/Clarifai/clarifai-cpp-grpc/releases)

# Installation

Using CMake's `FetchContent` functionality:

```cmake
include(FetchContent)

FetchContent_Declare(
        ClarifaiGrpc
        GIT_REPOSITORY https://github.com/Clarifai/clarifai-cpp-grpc.git
        GIT_TAG INSERT_LATEST_VERSION_HERE
)
FetchContent_MakeAvailable(ClarifaiGrpc)
```

> On Windows and macOS gRPC requires explicitly setting the root of trust for SSL. One way to do this is by setting the `GRPC_DEFAULT_SSL_ROOTS_FILE_PATH` environmental variable. To do this on macOS use:
>
> ```
> curl -Lo roots.pem https://raw.githubusercontent.com/grpc/grpc/master/etc/roots.pem
> export GRPC_DEFAULT_SSL_ROOTS_FILE_PATH="$PWD/roots.pem"
> ```
>
> On Windows use:
>
> ```
> @powershell -NoProfile -ExecutionPolicy unrestricted -Command ^
>     (new-object System.Net.WebClient).Downloadfile( ^
>         'https://raw.githubusercontent.com/grpc/grpc/master/etc/roots.pem', ^
>         'roots.pem')
> set GRPC_DEFAULT_SSL_ROOTS_FILE_PATH=%cd%\roots.pem
> ```
> See more [here](https://github.com/grpc/grpc/issues/16571).

## Versioning

This library doesn't use semantic versioning. The first two version numbers (`X.Y` out of `X.Y.Z`) follow the API (backend) versioning, and
whenever the API gets updated, this library follows it.

The third version number (`Z` out of `X.Y.Z`) is used by this library for any independent releases of library-specific improvements and bug fixes.

## Getting started

### Constructing the Stub

Construct the `V2::Stub` object using which you'll access all the Clarifai API functionality, and
a `grpc::ClientContext` object that will be used for authentication.

```c++
auto channel = grpc::CreateChannel("api.clarifai.com:443", grpc::SslCredentials(grpc::SslCredentialsOptions()));
unique_ptr<V2::Stub> stub = V2::NewStub(channel);

unique_ptr<grpc::ClientContext> context(new grpc::ClientContext);
context->AddMetadata("authorization", "Key YOUR_CLARIFAI_PAT");
```

### Additional Steps for Enterprise Users

Enterprise users with an on premise install of the Clarifai platform will need to adjust the channel example above to use the custom address and port for their specific install.  `api.clarifai.com` can be replaced with the IP address.  The port `443` should remain the same although this could vary depending on the particulars of the install.

## Example Predict Call

Predict concepts in an image:

```c++
// This is a publicly available model.
string GENERAL_MODEL_ID = "aaa03c23b3724a16a56b629203edc62c";

PostModelOutputsRequest request;
request.set_model_id(GENERAL_MODEL_ID);

// Set the user and app information here which is needed when
// using a Personal Access Token.
UserAppIDSet* user_app_id = request.mutable_user_app_id();
user_app_id->set_user_id("YOUR CLARIFAI USER ID");
user_app_id->set_app_id("YOUR CLARIFAI APPLICATION ID");

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
```

## Further documentation

See the *API GUIDE* section in [the Clarifai documentation](https://docs.clarifai.com) to find out how to implement
a specific functionality. The code examples are in programming languages other than C++, and since different languages
differ only in syntax but share the structure (requests, responses, methods all have the same fields) it should be
relatively straightforward to translate the code examples to C++.

Also see, in the [example_usage](https://github.com/Clarifai/clarifai-cpp-grpc/tree/master/tests) subdirectory,
an example project showing how to use the library.
