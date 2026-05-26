#include<iostream>
#include<string>

class IGameObject{
       public:
          virtual void update() = 0;
          virtual void render() = 0;
          virtual ~IGameObject() = default;
};

class Plane: public IGameObject{
      public:
         Plane() { std::cout << "Plane is created\n" ;}

         void update() override
         {
           std::cout << "Plane updated \n";
         }

         void render() override
         {
           std::cout << "Plane rendered \n";
         }

         ~Plane()
         {
            std::cout << "Plane destroyed\n";
         }
};

class Boat: public IGameObject{
      public:
        Boat() {std::cout << "Boat is created\n" ;}
        void update() override
        {
          std::cout << "Boat updated \n";
        }

        void render() override
        {
           std::cout << "Boat rendered \n";
        }

        ~Boat()
        {
           std::cout << "Boat destroyed\n";
        }
};

IGameObject* CreateFactoryObject(const std::string& type)
{
    if(type == "plane"){
         return new Plane;
    }
    else{
         return new Boat;
    }

    return nullptr;
}

int main()
{
   IGameObject* myObject1 = CreateFactoryObject("plane");
   IGameObject* myObject2 = CreateFactoryObject("boat");

   if(myObject1 != nullptr){
           myObject1 -> update();
           myObject1 -> render();
   }

   if(myObject2 != nullptr){
           myObject2 -> update();
           myObject2 -> render();
   }

   delete myObject1;
   delete myObject2;

   return 0;
}
