#include<iostream>
#include<utility>

int main()
{
  std::pair<int, std::string> p;
  p.first = 4;
  p.second = "Dwipayan Santra";

  std::cout << "number " << p.first << " name " << p.second <<std::endl;
  return 0;
}
