#include<iostream>
class enginebase
{
   public:
    enginebase()
    {
      std::cout << "Engine is created" << std::endl;
    }

    ~enginebase()
    {
      std::cout << "Engine destroyed" <<std::endl;
    }
};

class car : public enginebase
{
 public:
   int speed;

   car()
   {
     std::cout << "Car is created" << std::endl;
   }

   ~car()
   {
     std::cout << "Car is destroyed" << std::endl;
   }

   void start()
   {
     std::cout<< "Car is started" << std::endl;
   }
};

int main()
{
  car c;

  c.start();

  c.speed = 70;

  std::cout << "size of object " << sizeof(c) <<std::endl;
  std::cout<< "car speed currently " <<c.speed<<std::endl;

  //Creating by heap
  car* ptr = new car();
  ptr->start();
  delete ptr;
}
