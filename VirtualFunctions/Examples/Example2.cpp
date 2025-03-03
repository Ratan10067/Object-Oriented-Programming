#include <iostream>
#include <string>

class Base
{
public:
    virtual std::string getName() const { return "Base"; } // note addition of virtual keyword
};

class Derived : public Base
{
public:
    virtual std::string getName() const { return "Derived"; }
};
class Derived1 : public Derived
{
public:
    virtual std::string getName() const { return "Derived1"; }
};

int main()
{
    Derived derived{};
    Base &rBase{derived};
    std::cout << "rBase is a " << rBase.getName() << '\n';

    return 0;
}
// Output: rBase is a Derived