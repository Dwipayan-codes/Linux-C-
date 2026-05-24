#include <iostream>
#include <string>

//Teacher without student exist করতে পারে।
//Student without teacherও exist করতে পারে।

class Teacher
{
public:
    std::string name;

    Teacher(std::string n)
    {
        name = n;
    }
};

class Student
{
public:
    std::string name;

    Student(std::string n)
    {
        name = n;
    }

    void learnFrom(Teacher& t)
    {
        std::cout << name << " learns from "
                  << t.name << std::endl;
    }
};

int main()
{
    Teacher t("Rahul");

    Student s("Amit");

    s.learnFrom(t);
}
