#include<iostream>
#include<vector>

int main()
{
  std::vector<int> nums;

  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  nums.push_back(4);
  nums.push_back(5);

  for(int value : nums) {
    std::cout << value << " " << std::endl;
  }

 return 0;
}
