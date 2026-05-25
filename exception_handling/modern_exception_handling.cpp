#include<iostream>
#include<stdexcept>

int main()
{
   try
   {
       throw std::runtime_error("Runtime Error");
   }
   catch(const std::exception& e)
   {
       std::cout << e.what() << std::endl;
   }
}
