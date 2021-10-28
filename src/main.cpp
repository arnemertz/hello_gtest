#include <iostream>

#include "hello.hpp"

int main(int, char**) {
    Hello hello{std::cout};
    hello.sayHello("class");
}
