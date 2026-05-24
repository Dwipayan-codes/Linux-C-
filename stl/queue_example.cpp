#include<iostream>
#include<queue>

int main()
{
  std::queue<int> qe;
  qe.push(10);
  qe.push(20);
  qe.push(30);

  std::cout<< "Top "<<qe.front()<< std::endl;
  qe.pop();
  std::cout<< "Top "<<qe.front()<< std::endl;

  return 0;
}
