#include <iostream>

int main()
{
    try
    {
        throw 10;
    }
    catch(int x)
    {
        std::cout << "Exception: "
                  << x << std::endl;
    }
}
