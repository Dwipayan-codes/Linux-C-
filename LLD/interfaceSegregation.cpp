class Workable
{
public:
    virtual void work() = 0;
};

class Eatable
{
public:
    virtual void eat() = 0;
};

class Human
    : public Workable,
      public Eatable
{
public:
    void work() override
    {
        std::cout << "Working\n";
    }

    void eat() override
    {
        std::cout << "Eating\n";
    }
};

class Robot : public Workable
{
public:
    void work() override
    {
        std::cout << "Working\n";
    }
};
