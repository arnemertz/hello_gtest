#include <iosfwd>
#include <string>

class Hello {
    std::ostream& os;
public:
    explicit Hello(std::ostream& os);
    void sayHello(std::string const& name);
};
