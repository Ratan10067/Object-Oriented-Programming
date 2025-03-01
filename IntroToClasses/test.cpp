#include "bits/stdc++.h"
using namespace std;
class Test
{
public:
    const int data = 4;
    void f()
    {
        cout << data << endl;
    }

    void f() const
    {
        cout << "I am Called" << endl;
    }
};

int main()
{
    Test test;
    test.f();
    const Test test1;
    test1.f();
    return 0;
}