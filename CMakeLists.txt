cmake_minimum_required(VERSION 3.13)

if(NOT MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
else()
  add_definitions(-D_WIN32_WINNT=0x600)
endif()


message(STATUS "Using gRPC via add_subdirectory (FetchContent).")
include(FetchContent)
FetchContent_Declare(
  grpc
  GIT_REPOSITORY https://github.com/grpc/grpc.git
  GIT_TAG        v1.29.1)
FetchContent_MakeAvailable(grpc)

# Since FetchContent uses add_subdirectory under the hood, we can use
# the grpc targets directly from this build.
set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_REFLECTION grpc++_reflection)
set(_GRPC_GRPCPP grpc++)

set(hw_proto_srcs
        "google/api/annotations.pb.cc"
        "google/api/http.pb.cc"
        "proto/clarifai/api/resources.pb.cc"
        "proto/clarifai/api/service.pb.cc"
        "proto/clarifai/api/service.grpc.pb.cc"
        "proto/clarifai/api/status/status.pb.cc"
        "proto/clarifai/api/status/status_code.pb.cc"
        "proto/clarifai/api/utils/extensions.pb.cc"
        "proto/clarifai/auth/scope/scope.pb.cc"
        "proto/clarifai/auth/types/types.pb.cc"
        "proto/clarifai/auth/util/extension.pb.cc"
        )

include_directories("${CMAKE_CURRENT_BINARY_DIR}")

add_library(ClarifaiGrpc
        ${hw_proto_srcs})
target_include_directories(ClarifaiGrpc PUBLIC ".")
target_link_libraries(ClarifaiGrpc
        ${_REFLECTION}
        ${_GRPC_GRPCPP}
        ${_PROTOBUF_LIBPROTOBUF})

enable_testing()

foreach(_target
        integration_tests)
  add_executable(${_target} "tests/${_target}.cc" ${hw_proto_srcs})
  add_test(${_target} ${_target})
  target_include_directories(${_target} PUBLIC ".")
  target_link_libraries(${_target}
          ${_REFLECTION}
          ${_GRPC_GRPCPP}
          ${_PROTOBUF_LIBPROTOBUF})
endforeach()
