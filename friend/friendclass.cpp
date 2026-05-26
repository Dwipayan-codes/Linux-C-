#include<iostream>

class B;

class A{
   private:
       int x = 9;
       friend class B;
};

class B{
    public:

        void show(A a)
        {
          std::cout<<a.x<<std::endl;
        }
};

int main()
{
    A a;
    B b;

    b.show(a);

    return 0;
}
