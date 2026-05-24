#include<iostream>

template<typename T>

class Box
{
  public:
        T value;
        Box(T v)
        {
          value = v;
        }

        ~Box()
        {
         
        }

        void show()
        {
          std::cout<< "value " << value << std::endl;
        }
};

int main()
{
 Box<int> b(10);
 b.show();

 Box<std::string> bt("Ram");
 bt.show();
 return 0;
}
