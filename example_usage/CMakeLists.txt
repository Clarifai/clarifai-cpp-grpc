cmake_minimum_required(VERSION 3.16)
project(example_usage)

set(CMAKE_CXX_STANDARD 11)

include(FetchContent)

FetchContent_Declare(
        ClarifaiGrpc
        GIT_REPOSITORY https://github.com/Clarifai/clarifai-cpp-grpc.git
        # Instead of master, you should put here a fixed version.
        GIT_TAG master
)
FetchContent_MakeAvailable(ClarifaiGrpc)

add_executable(example_usage main.cpp)
target_link_libraries(example_usage ClarifaiGrpc)
