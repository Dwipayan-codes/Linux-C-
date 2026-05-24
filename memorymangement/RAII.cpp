#include <iostream>

class Memory
{
private:

    int* data;

public:

    Memory()
    {
        data = new int(100);

        std::cout << "Memory Allocated" << std::endl;
    }

    ~Memory()
    {
        delete data;

        std::cout << "Memory Freed" << std::endl;
    }
};

int main()
{
    Memory m;

    return 0;
}
