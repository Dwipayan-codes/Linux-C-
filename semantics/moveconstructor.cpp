#include <iostream>

class Test
{
public:

    int* data;

    Test(int value)
    {
        data = new int(value);

        std::cout << "Constructor"
                  << std::endl;
    }

    Test(Test&& other)
    {
        data = other.data;

        other.data = nullptr;

        std::cout << "Move Constructor"
                  << std::endl;
    }

    ~Test()
    {
        delete data;
    }
};

int main()
{
    Test t1(100);

    Test t2 = std::move(t1);

    if(t1.data == nullptr)
    {
        std::cout << "t1 became null" << std::endl;
    }

    if(t2.data == nullptr)
    {
        std::cout << "t2 is also null" << std::endl;
    }

    if(t1.data != nullptr)
    {
        std::cout << "t1 data " << *t1.data << std::endl;
    }

    if(t2.data != nullptr)
    {
        std::cout << "t2 data " << *t2.data << std::endl;
    }
}
