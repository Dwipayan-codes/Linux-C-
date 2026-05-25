#include<iostream>
#include<thread>
#include<mutex>
#include<vector>

std::mutex a;
std::mutex b;
static int shared_value = 0;

void shared_value_increment()
{
    b.lock();
    try{
        shared_value += 1;
        throw "Dangerous exception";
       }catch(...){
          std::cout << "handle exception" << std::endl;
          return;
       }
    b.unlock();
}


int main()
{
  std::vector<std::thread> threads;
  for(int i = 0; i < 1000; i++){
      threads.push_back(std::thread(shared_value_increment));
  }

  for(int i = 0; i < 1000; i++){
     threads[i].join();
  }

  std::cout << "shared value " << shared_value << std::endl;

  return 0;
}
