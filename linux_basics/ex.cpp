#include<iostream>
#include<unistd.h>

int main()
{
  std::cout << "We are in ex\n";
  std::cout << " ex process id - " << getpid() << std::endl;
  return 0;
}
