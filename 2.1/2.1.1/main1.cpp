#include<iostream>
#include "lc_s.h"

int main(){
   Solution s;
   int arr[5] = {2, 4, 6, 6, 7};
   std::vector<int> nums(arr, arr+5);
   std::vector<int> & nums1 = nums;
   int i = s.removeduplicates(nums1);
   std::cout<<i<<std::endl;
}
