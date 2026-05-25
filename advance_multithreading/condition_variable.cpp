#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>

std::mutex m;
std::condition_variable cd;

bool ready = false;

void worker()
{
  std::unique_lock<std::mutex> lock(m);

  cd.wait(lock,
               [](){
                     return ready;
                   });
  std::cout << "Worker running" << std::endl;
}

int main()
{
 std::thread t(worker);
 std::this_thread::sleep_for(
      std::chrono::seconds(2));
 {
    std::lock_guard<std::mutex> lock(m);
    ready = true;
 }

  cd.notify_one();
  t.join();

 return 0;
}


