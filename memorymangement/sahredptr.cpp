#include<iostream>
#include<memory>

int main()
{
  std::shared_ptr<int> p1 = std::make_shared<int>(100);
  std::shared_ptr<int> p2 = p1;
  std::shared_ptr<int> p3 = p1;

  std::cout << "p1 " << *p1 <<std::endl;
  std::cout << "p1 count " << p1.use_count() <<std::endl;

  std::cout << "p2 " << *p2 <<std::endl;
  std::cout << "p2 count " << p2.use_count() <<std::endl;


  std::cout << "p3 " << *p3 <<std::endl;
  std::cout << "p3 count " << p3.use_count() <<std::endl;

  return 0;
}
