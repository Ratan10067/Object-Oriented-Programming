#include <string>
#include <iostream>
class Base
{
protected:
    int m_value{};

public:
    Base(int value)
        : m_value{value}
    {
        std::cout << "Base Constructor is Called" << std::endl;
    }

    std::string getName() const { return "Base"; }
    int getValue() const { return m_value; }
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base{value}
    {
        std::cout << "Derieved Constructor is Called" << std::endl;
    }

    std::string getName() const { return "Derived"; }
    int getValueDoubled() const { return m_value * 2; }
};

int main()
{
    Derived derived{5};
    std::cout << "derived is a " << derived.getName() << " and has value " << derived.getValue() << '\n';

    Derived &rDerived{derived};
    std::cout << "rDerived is a " << rDerived.getName() << " and has value " << rDerived.getValue() << '\n';

    Derived *pDerived{&derived};
    std::cout << "pDerived is a " << pDerived->getName() << " and has value " << pDerived->getValue() << '\n';

    return 0;
}

/***
Output:
Base Constructor is Called
Derived Constructor is Called
derived is a Derived and has value 5
rDerived is a Derived and has value 5
pDerived is a Derived and has value 5
***/