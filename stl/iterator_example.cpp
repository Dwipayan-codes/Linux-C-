#include<iostream>
#include<vector>

int main()
{
  std::vector<int> vt = {10, 20, 30};
  std::vector<int>::iterator it;

 for(it = vt.begin(); it != vt.end(); it++)
 {
    std::cout<< *it <<std::endl;
 }

  return 0;
}
