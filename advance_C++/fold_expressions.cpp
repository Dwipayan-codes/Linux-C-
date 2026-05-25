#include<iostream>

template<typename... Args>

auto sum(Args... args)
{
    return (... + args);
}

int main()
{
  std::cout << sum(1, 2, 3, 4) << std::endl;
  return 0;
}
