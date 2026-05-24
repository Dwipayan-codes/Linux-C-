#include<iostream>

int main()
{
  int arr[3] = { 10, 20, 30 };
  int *ptr = arr;
  
  std::cout << *ptr << std::endl;
  std::cout << arr[0] << std::endl;

  ptr++;
  std::cout << *ptr << std::endl;

  return 0;
}
