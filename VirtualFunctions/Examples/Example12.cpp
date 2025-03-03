#include "iostream"
class PoweredDevice
{
};

class Scanner : virtual public PoweredDevice
{
};

class Printer : virtual public PoweredDevice
{
};

class Copier : public Scanner, public Printer
{
};

int main()
{
    return 0;
}