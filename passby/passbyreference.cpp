#include <iostream>

void change(int& x)
{
    std::cout << x <<std::endl;
    x = 50;
    std::cout << x <<std::endl;
}

int main()
{
    int a = 10;

    change(a);
}
