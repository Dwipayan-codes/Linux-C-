#include <iostream>

int main()
{
    auto add =
        [](int a, int b)
        {
            return a + b;
        };

    std::cout << add(10,20);
}
