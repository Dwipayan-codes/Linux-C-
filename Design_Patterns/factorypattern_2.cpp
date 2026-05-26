#include <iostream>
#include <string>

class IGameObject
{
public:

    virtual void update() = 0;

    virtual void render() = 0;

    virtual ~IGameObject() = default;
};

class Plane : public IGameObject
{
public:

    void update() override
    {
        std::cout << "Plane Update\n";
    }

    void render() override
    {
        std::cout << "Plane Render\n";
    }
};

class Boat : public IGameObject
{
public:

    void update() override
    {
        std::cout << "Boat Update\n";
    }

    void render() override
    {
        std::cout << "Boat Render\n";
    }
};

IGameObject* CreateFactoryObject(const std::string& type)
{
    if(type == "plane")
    {
        return new Plane;
    }

    if(type == "boat")
    {
        return new Boat;
    }

    return nullptr;
}

int main()
{
    IGameObject* myObject1 = CreateFactoryObject("plane");
    IGameObject* myObject2 = CreateFactoryObject("boat");

    myObject1->update();
    myObject1->render();

    myObject2->update();
    myObject2->render();

    delete myObject1;
    delete myObject2;

    return 0;
}
