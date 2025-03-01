class Date
{
public:
    int year{};
    int month{};
    int day{};

    void incrementDay()
    {
        ++day;
    }
};

int main()
{
    const Date today{2020, 10, 14}; // const

    // today.day += 1;       // compile error: can't modify member of const object
    // today.incrementDay(); // compile error: can't call member function that modifies member of const object

    return 0;
}