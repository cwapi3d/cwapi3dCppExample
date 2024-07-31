project(cwapi3dCppTest VERSION 0.1.0)

add_executable(${PROJECT_NAME}_test)

target_sources(${PROJECT_NAME}_test PRIVATE
    main_test.cpp
    GeometryController_mock.h
    GeometryController_test.cpp
)

include(${CMAKE_SOURCE_DIR}/cmake/CPM.cmake)

CPMAddPackage(
        NAME googletest
        GITHUB_REPOSITORY google/googletest
        GIT_TAG main
)

find_package(cwapi3d REQUIRED)

target_include_directories(${PROJECT_NAME}_test
        PRIVATE
        ${CMAKE_BINARY_DIR}/_deps/cwapi3d-src/include
        ${gtest_SOURCE_DIR}/include
        ${gmock_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}_test PRIVATE
        GTest::gtest_main
        GTest::gtest
        gmock
        gmock_main
)

add_test(NAME cwapi3dCppExampleTest COMMAND ${PROJECT_NAME}_test)
add_test(NAME GeometryControllerTest COMMAND ${PROJECT_NAME}_test)

target_compile_definitions(${PROJECT_NAME}_test PRIVATE CWAPI3D_PLUGIN_NAME=L"TEST")
target_compile_definitions(${PROJECT_NAME}_test PRIVATE CWAPI3D_AUTHOR_NAME=L"Your Name")
target_compile_definitions(${PROJECT_NAME}_test PRIVATE CWAPI3D_AUTHOR_EMAIL=L"your@mail.com")