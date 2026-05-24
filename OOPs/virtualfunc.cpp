#include<iostream>

class Animal
{
   public:

      virtual void sound()
      {
         std::cout << "Just appeared" << std::endl;
      }
};

class Dog : public Animal
{
   public:
     void sound() override
     {
       std::cout << "Woff" <<std::endl;
     }
};

int main()
{
   Animal *an = new Dog();

   an -> sound();
}
