#include <iostream>

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = 10;
    int y = 20;

    int z = add(x, y);

    std::cout << z << std::endl;
}
