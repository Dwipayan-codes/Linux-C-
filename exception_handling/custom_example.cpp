#include<iostream>
#include<exception>

class MyError: public std::exception
{
   public:
        const char* what() const noexcept override
        {
           return "Custom Error";
        }
};

int main()
{
   try
   {
         throw MyError();
   }
   catch(const std::exception& e)
   {
        std::cout << e.what() << std::endl;
   }
}
