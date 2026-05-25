#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> counter = 0;

void increment()
{
    for(int i = 0; i < 100000; i++)
    {
        counter.fetch_add(1,
                          std::memory_order_relaxed);
    }
}

int main()
{
    std::thread t1(increment);
    std::thread t2(increment);

    t1.join();
    t2.join();

    std::cout << counter << std::endl;
}
