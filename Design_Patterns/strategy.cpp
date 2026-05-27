#include<iostream>

//Strategy Interface
class PaymentStrategy
{
      public:
         virtual void pay() = 0;
         virtual ~PaymentStrategy() = default;
};

//Concreate Strategies
class CreditCardPayment : public PaymentStrategy
{
      public:
          void pay() override
          {
              std::cout<< "Paid using credit card\n" << std::endl;
          }
};


class UPIPayment : public PaymentStrategy
{
      public:
          void pay() override
          {
              std::cout<< "Paid using upi\n" << std::endl;
          }
};


//Context class
class PaymentProcessor{
        PaymentStrategy* strategy;

        public:
            PaymentProcessor(PaymentStrategy* s) : strategy(s)
            {
            }

            void setStrategy(PaymentStrategy* s)
            {
               strategy = s;
            }

            void process()
            {
                strategy -> pay();
            }
};


int main()
{
    CreditCardPayment cred;

    PaymentProcessor processor(&cred);

    processor.process();

    UPIPayment upi;
    processor.setStrategy(&upi);
    processor.process();

    return 0;
}
