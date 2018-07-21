// remove deplicates from sroted array
// return the length of the array after duplicate
#include "lc_s.h"

int Solution::removeduplicates(std::vector<int>& nums){
   if(nums.empty()) return 0;

   int index = 0;
   for(int i = 0;i < nums.size();i++){
     if(nums[index]!=nums[i])
          nums[++index]=nums[i];
   }
   return index+1; 
}
