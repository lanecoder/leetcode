#include "lc.h"

int Solution::removeduplicates(std::vector<int> & nums){
    if (nums.size() == 0)
	return 0;

    int idex = 2;
    for(int i = 2; i < nums.size();i++){
	if(nums[i]!=nums[idex-2])
		nums[idex++] = nums[i];
    }
    return idex;
    
}
