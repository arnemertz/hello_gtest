#include "hello.hpp"

#include <ostream>

Hello::Hello(std::ostream& os)
    : os{os}
    {}

void Hello::sayHello(std::string const& name) {
    os << "Hello, " << name << "!\n";
}