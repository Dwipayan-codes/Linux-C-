#include <iostream>

void change(int x)
{
    x = 50;
std::cout << x << std::endl;
}

int main()
{
    int a = 10;

    change(a);

    std::cout << a <<std::endl;
}
