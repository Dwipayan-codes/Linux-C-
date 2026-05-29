#include<iostream>

using namespace std;

class Notification{
    public:
       virtual void send() = 0;
       virtual ~Notification() = default;
};



class EmailNotification : public Notification
{
     public:
         void send() override
         {
            cout << "Sending Email notification\n";
         }

};


class SMSNotification : public Notification
{
      public:
          void send() override
          {
             cout << "Sending sms notification\n";
          }
};

class NotificationService
{
    public:
      void sendNotification(Notification* n)
      {
           n->send();
      }
};



int main()
{
     EmailNotification email;
     NotificationService service;
     service.sendNotification(&email);
     return 0;
}
