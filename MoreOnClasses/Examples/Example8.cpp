// Static Variable Example
#include <iostream>

int generateID()
{
    static int s_id{0}; // static local variable
    return ++s_id;
}

int main()
{
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';
    std::cout << generateID() << '\n';

    return 0;
}

/***
Output:
1
2
3
***/
