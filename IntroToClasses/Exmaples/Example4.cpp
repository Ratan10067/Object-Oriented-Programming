#include <iostream>

class Date
{
public:
    int year{};
    int month{};
    int day{};

    void print() const
    {
        std::cout << year << '/' << month << '/' << day;
    }
};

void doSomething(const Date &date)
{
    date.print(); // compiler error: const object calling non-const member function
}

int main()
{
    Date today{2020, 10, 14}; // non-const
    today.print();

    doSomething(today);

    return 0;
}