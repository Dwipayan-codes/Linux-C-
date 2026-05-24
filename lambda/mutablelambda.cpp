#include <iostream>

int main()
{
    int x = 10;

    auto func =
        [x]() mutable
        {
            x++;

            std::cout << "mutable x " << x << std::endl;
        };

    func();
            std::cout << "original x " << x << std::endl;
}
