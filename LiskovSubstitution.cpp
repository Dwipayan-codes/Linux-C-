class Bird
{
};

class FlyingBird : public Bird
{
public:
    virtual void fly() = 0;
};

class Sparrow : public FlyingBird
{
public:
    void fly() override
    {
        std::cout << "Flying\n";
    }
};

class Penguin : public Bird
{
};
