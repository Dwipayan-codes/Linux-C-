#include <iostream>

class Test
{
public:

    ~Test()
    {
        std::cout << "Destructor"
                  << std::endl;
    }
};

void func()
{
    Test t;

    //throw 1;
    throw 0.01;
}

int main()
{
    try
    {
        func();
    }
    catch(int)
    {
        //program immediately starts searching for matching catch
        //But before leaving func all local stack objects must be destroyed
        //This process is called: Stack Unwinding
        //So destructor runs first
        std::cout << "Caught\n";
    }
    catch(...)
    {
        //Handles all exception
        std::cout << "Unknown Exception\n";
    }
}
