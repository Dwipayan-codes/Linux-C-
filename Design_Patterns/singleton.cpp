#include<iostream>

class Logger{
      public:
          //Retrive the signle instance of the object
          static Logger* GetInstance(){
              return s_instance;
          }

         void show(std::string str)
         {
            std::cout<<str<<std::endl;
         }

      private:
          Logger(){
              std::cout << "Logger was created\n";
          }

          ~Logger(){
              std::cout << "Logger was destroyed\n";
          }

         //Defination
         static Logger* s_instance;
};

//Declaration
Logger* Logger::s_instance = nullptr;

int main()
{
   Logger* log = Logger::GetInstance();
   log -> show("Logger running");
   return 0;
}
