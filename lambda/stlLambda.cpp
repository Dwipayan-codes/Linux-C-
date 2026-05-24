#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
   std::vector<int> nums = {9 ,2 , 1 , 4, 6, 7};

   std::sort(nums.begin(), nums.end(), [](int a, int b){
             return a > b; 
             });

   std::for_each(nums.begin(), nums.end(), [](int n) { std::cout << n << std::endl; });

   return 0;
}
