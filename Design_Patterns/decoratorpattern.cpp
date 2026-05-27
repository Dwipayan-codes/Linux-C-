#include<iostream>

using namespace std;

//Base Component
class Coffee
{
    public:
       virtual int cost() = 0;
       virtual ~Coffee() = default;
};


//Concrete component
class SimpleCoffee : public Coffee
{
   public:
      int cost() override
      {
          return 10;
      }
};

//Decorator base class
//Decorator ALSO inherits from Coffee
//AND contains a Coffee*
class CoffeeDecorator : public Coffee
{
      protected:
          Coffee* coffee;

      public:
          CoffeeDecorator(Coffee* c) : coffee(c)
          {
          }
};


//Concrete Decorators
class MilkDecorator : public CoffeeDecorator
{
   public:
       MilkDecorator(Coffee* c) : CoffeeDecorator(c)
       {
       }

       int cost() override
       {
          return coffee->cost() + 9;
       }
};

class SugarDecorator : public CoffeeDecorator
{
public:
    SugarDecorator(Coffee* c)
        : CoffeeDecorator(c)
    {
    }

    int cost() override
    {
        return coffee->cost() + 2;
    }
};


int main()
{
   Coffee* coffee = new SimpleCoffee();
   coffee = new MilkDecorator(coffee);
   coffee = new SugarDecorator(coffee);

   cout << "Coffee cost is " << coffee -> cost() << endl;
   return 0;
}



