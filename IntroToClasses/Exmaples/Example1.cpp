#include <bits/stdc++.h>
using namespace std;
class Date
{
public: // added this line, which is called an access specifier
    int m_day{};
    int m_month{};
    int m_year{};
};

void printDate(const Date &date) // this is a non-member function
{
    cout << date.m_day << '/' << date.m_month << '/' << date.m_year << endl;
}

int main()
{
    Date date{4, 10, 21};
    printDate(date);

    return 0;
}

// Output: 4/10/21