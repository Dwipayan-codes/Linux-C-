#include <iostream>
#include <atomic>

int main()
{
    std::atomic<int> x = 10;

    int expected = 10;

    bool result =
        x.compare_exchange_strong(expected, 20);
    if(result)
        std::cout << x << std::endl;
}
