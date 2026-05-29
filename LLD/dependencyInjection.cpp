#include<iostream>

using namespace std;

class IKeyboard{
    public:
      virtual void type() = 0;
      virtual ~IKeyboard() = default;
};

class WiredKeyboad : public IKeyboard
{
    public:
       void type() override
       {
          cout<<"Wired Keyboard\n";
       }
};

class BluetoothKeyboard : public IKeyboard
{
    public:
        void type() override
        {
           cout << "Bluetooth keyboard\n";
        }
};


class Computer
{
  private:
       IKeyboard* keyboard;

  public:
       Computer(IKeyboard* key) : keyboard(key) {}

       void use()
       {
           keyboard->type();
       }
};


int main()
{
  BluetoothKeyboard keyboard;

  Computer computer(&keyboard);

  computer.use();

  return 0;
}
