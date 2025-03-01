#include <iostream>
#include <string>
using namespace std;
struct Cat
{
    string name{"cat"};
    int numLegs{4};
};

struct Dog
{
    string name{"dog"};
    int numLegs{4};
};

struct Chicken
{
    string name{"chicken"};
    int numLegs{2};
};

int main()
{
    Cat animal;
    cout << "a " << animal.name << " has " << animal.numLegs << " legs\n";

    return 0;
}