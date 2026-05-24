#include <iostream>

int main()
{
   int x = 10;
   int *ptr =  &x;
   *ptr = 100;

   std::cout << x << std::endl;

   return 0;
}
