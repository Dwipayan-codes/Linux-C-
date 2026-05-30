#include<iostream>

using namespace std;

class IATMState{
  public:
     virtual void insertCard() = 0;
     virtual void ejectCard() = 0;

     virtual ~IATMState() = default;
};

class NoCardState : public IATMState
{
  public:
      void insertCard() override
      {
          cout<< "Card inserted\n";
      }

      void ejectCard() override
      {
         cout<< "Card ejected\n";
      }
};

class HasCardState : public IATMState
{

   public:
       void insertCard() override
       {
           cout << "Already card inserted\n";
       }

       void ejectCard() override
       {
          cout << "Card removed\n";
       }

};

class ATM
{
   IATMState* currentState;

   public:
      ATM(IATMState* state) : currentState(state) {}

      void insertCard()
      {
          currentState->insertCard();
      }

      void ejectCard()
      {
         currentState->ejectCard();
      }
};


int main()
{
  IATMState* noCard = new NoCardState();
  ATM atm(noCard);

  atm.insertCard();
  atm.ejectCard();

  if(noCard != nullptr)
  {
     IATMState* hasCard = new HasCardState();
     ATM atm2(hasCard);

     atm2.insertCard();
     atm2.ejectCard();

     delete hasCard;
  }

  delete noCard;
 return 0;
}
