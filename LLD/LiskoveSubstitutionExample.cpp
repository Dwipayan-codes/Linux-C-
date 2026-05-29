#include<iostream>

using namespace std;

class Animal
{
   public:
       virtual void makeSound() = 0;
};

class Dog : public Animal
{
     public:
        void makeSound() override
        {
           cout << "Vouuu\n";
        }
};

class Cat : public Animal
{
      public:
          void makeSound() override
          {
            cout << "Meawww\n";
          }
};

class VoiceUse
{
   Animal* animal;

   public:
       VoiceUse(Animal* an)
       {
           animal = an;
       }

       void playSound()
       {
          animal -> makeSound();
       }
};

int main()
{
  Animal* dog = new Dog();
  Animal* cat = new Cat();

  VoiceUse vv1(dog);
  VoiceUse vv2(cat);

  vv1.playSound();
  vv2.playSound();

  delete dog;
  delete cat;
  return 0;
}
