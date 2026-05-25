#include <iostream>
#include <utility>

void process(int& x)
{
    std::cout << "x in & " << x << std::endl;
    std::cout << "Lvalue\n";
}

void process(int&& x)
{
    std::cout << "x in && " << x << std::endl;
    std::cout << "Rvalue\n";
}

template<typename T>
void wrapper(T&& arg)
{
    process(std::forward<T>(arg));
}

int main()
{
   int a = 5;

   wrapper(5);
   wrapper(a);
}
