#include<iostream>
#include<map>

int main()
{
  std::map<int, std::string> students;

  students[1] = "Gajju";
  students[2] = "Rahul";

  std::cout << students[1]  <<std::endl;

for(auto s : students)
{
    std::cout << s.first
              << " "
              << s.second
              << std::endl;
}
  return 0;
}
