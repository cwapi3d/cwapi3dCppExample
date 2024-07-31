cmake_minimum_required(VERSION 3.28)
project(cwapi3dExample VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)

include(${CMAKE_SOURCE_DIR}/cmake/CPM.cmake)

CPMAddPackage(
        NAME cwapi3d
        GITHUB_REPOSITORY cwapi3d/cwapi3dcpp
        GIT_TAG main
)

include(CTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(test)