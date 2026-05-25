#include<iostream>
#include<thread>
#include<queue>
#include<mutex>
#include<condition_variable>

std::mutex m;
std::queue<int> q;
std::condition_variable cv;

void producer()
{
  for(int i = 1; i <=5 ; i++)
  {
     std::lock_guard<std::mutex> lock(m);

     q.push(i);

     std::cout << "Produced " << i << std::endl;
  }

  cv.notify_one();
}

void consumer()
{
  while(true)
  {
    std::unique_lock<std::mutex> lock(m);

    cv.wait(lock,
            [](){
                   return !q.empty();
                });
    int value = q.front();
    q.pop();

    std::cout<< "Consumed " << value << std::endl;

   if(value == 5)
      break;
  }
}

int main()
{
  std::thread p(producer);
  std::thread c(consumer);

  p.join();
  c.join();

  return 0;
}
