#include <iostream>

int main()
{
    int x = 10;

    auto show =
        [x]()
        {
            std::cout << x;
        };

    show();
}
