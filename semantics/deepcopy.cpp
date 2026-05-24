#include <iostream>

class Test
{
public:

    int* data;

    Test(int value)
    {
        data = new int(value);
    }

    Test(const Test& other)
    {
        data = new int(*other.data);

        std::cout << "Deep Copy"
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

    Test t2 = t1;
}
