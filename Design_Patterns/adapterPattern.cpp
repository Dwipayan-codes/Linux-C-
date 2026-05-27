#include<iostream>

using namespace std;

//Target Interface
class IPrinter{
      public:
         virtual void print() = 0;
         virtual ~IPrinter() = default;
};

//Exsisting legacy class
//Cannot modify this class
class OldPrinter
{
     public:
        void oldPrint()
        {
           cout<< "printing from old printer\n";
        }
};

class PrinterAdapter: public IPrinter
{
    OldPrinter oldprinter;

    public:
        void print() override
        {
            oldprinter.oldPrint();
        }
};

int main()
{
  IPrinter* printer = new PrinterAdapter();
  printer -> print();
  delete printer;
  return 0;
}
