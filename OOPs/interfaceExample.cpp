#include<iostream>

class IPrinter
{
public:

    virtual void print() = 0;

    virtual ~IPrinter() {}
};

class LaserPrinter : public IPrinter
{
public:

    void print() override
    {
        std::cout << "Laser Printing";
    }
};

int main()
{
  LaserPrinter laser;
  laser.print();
}
