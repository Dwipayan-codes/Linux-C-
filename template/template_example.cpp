#include<iostream>

template<typename T>

T add(T a, T b)
{
  return a + b;
}

int main()
{
  std::cout<< "add 10 , 20 =" << add(10, 20) <<std::endl;
  std::cout<< "add 1.5 , 2.5 =" << add(1.5, 2.5) <<std::endl;
  return 0;
}
