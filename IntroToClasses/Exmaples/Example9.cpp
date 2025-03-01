// Example of Member Function Intialization List

#include "bits/stdc++.h"
using namespace std;
class foo
{
public:
    string name{};
    int age{};
    int number{};
    foo(string name, int age, int number) : name{name}, age(age), number(number)
    {
        cout << "Constructors is Called" << endl;
    }
};

signed main()
{
    foo f{"Ratan", 21, 7643};
    cout << f.name << " " << f.age << " " << f.number << endl;
    return 0;
}