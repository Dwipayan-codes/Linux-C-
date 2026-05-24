#include<iostream>
#include<stack>

int main()
{
  std::stack<int> st;
  st.push(10);
  st.push(20);
  st.push(30);

  std::cout<< "Top "<<st.top()<< std::endl;
  st.pop();
  std::cout<< "Top "<<st.top()<< std::endl;

  return 0;
}
