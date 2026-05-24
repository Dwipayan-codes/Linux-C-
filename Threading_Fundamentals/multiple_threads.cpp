#include<iostream>
#include<thread>

void task(int id)
{
   std::cout<< id << " " << "Task is running" << std::endl;
}

int main()
{
  std::thread t1(task, 1);
  std::thread t2(task, 2);

  t1.join();
  t2.join();

  return 0;
}


