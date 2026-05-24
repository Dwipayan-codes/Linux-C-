#include<iostream>

int main()
{
   auto greet = 
                []() 
                    {
                         std::cout<<"Hello Greet" << std::endl;
                    };

   greet();

   return 0;
}
