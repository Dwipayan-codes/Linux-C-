#include<iostream>
#include<functional>

int main()
{
  std::function<int(int, int)> add = [](int a , int b){
                                 return a + b;
                                 };

  std::cout<<add(5,4) << std::endl;

  return 0;
}
