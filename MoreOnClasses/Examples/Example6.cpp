#include "bits/stdc++.h"
using namespace std;
template <class T>
class Pair
{
public:
    T first{};
    T second{};
    Pair(T first, T second) : first(first), second(second) {}
    bool isEqual(const Pair<T> &p);
};

template <class T>
bool Pair<T>::isEqual(const Pair<T> &p)
{
    return (this->first == p.first and this->second == p.second);
}
int main()
{
    Pair<int> p1{2, 3};
    Pair<int> p2{2, 3};
    if (p1.isEqual(p2))
    {
        cout << "They are Equal" << endl;
    }
    else
    {
        cout << "They are Not Equal\n";
    }
    return 0;
}