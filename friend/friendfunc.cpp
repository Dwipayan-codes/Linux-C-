#include<iostream>

class Test
{
  private:
       int x = 10;

       friend void show(Test t);
};

void show(Test t)
{
  std::cout << t.x << std::endl;
}

int main()
{
   Test t;

   show(t);

   return 0;
}
