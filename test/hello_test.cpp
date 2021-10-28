#include <gtest/gtest.h>

#include <sstream>
#include "hello.hpp"

TEST(HelloTest, says_hello_name) {
    std::ostringstream output;
    Hello hello{output};
    hello.sayHello("Tester");

    EXPECT_EQ(output.str(), "Hello, Tester!\n");
}
