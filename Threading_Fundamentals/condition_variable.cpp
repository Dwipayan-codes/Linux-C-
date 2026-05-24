#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<chrono>

std::mutex g_lock;
std::condition_variable gConditionVariable;


int main()
{
  int result = 0;
  bool notifier = false;

  //Consumer
  //Must wait until the work is done by producer
  std::thread consumer([&]{
		  std::unique_lock<std::mutex> lock(g_lock);
		  if(!notifier)
		  {
 			gConditionVariable.wait(lock);
		  }

		  std::cout<<"Consumer, result is " << result << std::endl;

		  });

  //Producer
  std::thread producer([&]{
		  std::unique_lock<std::mutex> lock(g_lock);
		  //Do our work because we have lock
		  result = 42;
		  notifier = true;

		  std::this_thread::sleep_for(std::chrono::seconds(5));
		  std::cout << "Work Completed\n";

		  gConditionVariable.notify_one();
		  });

  producer.join();
  consumer.join();

  std::cout<< "Program is completed" << std::endl;
  return 0;
}
