#include<iostream>
#include<thread>
#include<mutex>

std::mutex mt;
int counter = 0;

void increment()
{
   for(int i =0; i <= 20000; i++)
   {
      std::lock_guard<std::mutex> lock(mt); //Better mutex style

      //mt.lock();
      counter++;
      //mt.unlock();
   }
}

int main()
{
  std::thread t1(increment);
  std::thread t2(increment);

  t1.join();
  t2.join();

  std::cout << counter << std::endl;

  return 0;
}
