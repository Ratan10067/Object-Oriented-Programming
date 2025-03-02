#include "bits/stdc++.h"
using namespace std;
template <class T1, class T2>
class Person
{
public:
    T1 height;
    T2 Name;
    Person(T1 height, T2 Name) : height(height), Name(Name) {}
    void print()
    {
        cout << this->height << " " << this->Name << endl;
    }
};
int main()
{
    Person<int, string> p{6, "AbDevillers"};
    p.print();
    return 0;
}