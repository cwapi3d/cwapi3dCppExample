project(cwapi3dCppExample VERSION 0.1.0)

set(BUILD_SHARED_LIBS ON)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
    cwapi3dCppExample.cpp
    ElementWrapper.h
    ElementWrapper.cpp
    )

find_package(cwapi3d REQUIRED)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        ${CMAKE_BINARY_DIR}/_deps/cwapi3d-src/include
)


target_compile_definitions(${PROJECT_NAME} PRIVATE CWAPI3D_PLUGIN_NAME=L"TEST")
target_compile_definitions(${PROJECT_NAME} PRIVATE CWAPI3D_AUTHOR_NAME=L"Your Name")
target_compile_definitions(${PROJECT_NAME} PRIVATE CWAPI3D_AUTHOR_EMAIL=L"your@mail.com")