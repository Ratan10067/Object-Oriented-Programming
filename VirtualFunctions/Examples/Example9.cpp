#include <string>

class Base
{
public:
    std::string sayHi() const { return "Hi"; }             // a normal non-virtual function
    virtual std::string getName() const { return "Base"; } // a normal virtual function
    virtual int getValue() const = 0;                      // a pure virtual function
    // int doSomething() = 0;                                 // Compile error: can not set non-virtual functions to 0
};

int main()
{
    return 0;
}