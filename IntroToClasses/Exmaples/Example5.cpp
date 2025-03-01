/*
Example of overload a member function with the help of keyword const so two functions which differ only in their const-ness are considered distinct.
*/

#include <iostream>

class Something
{
public:
    void print()
    {
        std::cout << "non-const\n";
    }

    void print() const
    {
        std::cout << "const\n";
    }
};

int main()
{
    Something s1{};
    s1.print(); // calls print()

    const Something s2{};
    s2.print(); // calls print() const

    return 0;
}

/*
Output:
non-const
const
*/