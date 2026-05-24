#include<iostream>
#include<thread>
#include<mutex>

std::mutex mutex;

void job1(){
   
      mutex.lock();
      std::cout << "Job 1 is running" << std::endl;
      mutex.unlock();
   }

void job2(){
  if(mutex.try_lock()){
     std::cout << "Job 2 is running" << std::endl;
     mutex.unlock();
  }
}

int main(){
   std::thread t1(job1);
   std::thread t2(job2);

   t1.join();
   t2.join();

   return 0;
}
