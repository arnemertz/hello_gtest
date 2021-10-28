
add_executable(HelloUnitTests hello_test.cpp)

target_link_libraries(HelloUnitTests lib_hello gtest_main gmock)

include(GoogleTest)
gtest_discover_tests(HelloUnitTests)
