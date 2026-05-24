#include <iostream>
#include <vector>

//Department stores:

//Teacher references/pointers

//But Teachers created separately।

class Teacher
{
public:

    std::string name;

    Teacher(std::string n)
    {
        name = n;
    }

    ~Teacher()
    {
      std::cout << "Teacher destroyed" << std::endl;
    }
};

class Department
{
public:

    std::vector<Teacher*> teachers;

    Department()
    {
       std::cout << "Department created" << std::endl;
    }

    ~Department()
    {
      std::cout << "Department destroyed" << std::endl;
    }

    void addTeacher(Teacher* t)
    {
        teachers.push_back(t);
    }

    void show()
    {
        for(auto t : teachers)
        {
            std::cout << t->name << std::endl;
        }
    }
};

int main()
{
    Teacher t1("Rahul");
    Teacher t2("Ankit");

    Department d;

    d.addTeacher(&t1);
    d.addTeacher(&t2);

    d.show();
}
