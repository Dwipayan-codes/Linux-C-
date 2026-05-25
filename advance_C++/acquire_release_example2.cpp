#include<iostream>
#include<thread>
#include<atomic>
#include<chrono>

int x = 0;

std::atomic<bool> flag(false);

void writer()
{
   x = 1;
   std::this_thread::sleep_for(std::chrono::milliseconds(5000));
   flag.store(true, std::memory_order_release);
}

void reader()
{
   while(!flag.load(std::memory_order_acquire))
   {

   }

   std::cout << x << std::endl;
}

int main()
{
   std::thread t1(writer);
   std::thread t2(reader);

   t1.join();
   t2.join();
}

