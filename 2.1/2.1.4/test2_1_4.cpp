#include "test.h"

int Solution::search(const std::vector<int> & nums, int target){
    if(nums.size() == 0) {return -1;}
    int left = 0;
    int right = nums.size();
    std::cout<<"nums's size: "<<right<<std::endl;
    while(left != right){	
    	const int mid = left + (right - left)/2;
	if(nums[mid] == target) {return mid;}
	if(nums[left] < nums[mid]){ // breakpoint at left,drease range to avoid breakpoint

	   if(nums[left] <= target && target < nums[mid]){
	   	right = mid;
		//std::cout<<"right:"<<mid<<" nums[mid]:"<<nums[mid]<<std::endl;
	   }else{
		left = mid + 1;
		//std::cout<<"left:"<<left<<" nums[mid]:"<<nums[mid]<<std::endl;
		}
	}
        else if(nums[left]>nums[mid]){ // breakpoint at right,drease range to avoid breakpoint
	    if(target > nums[mid] && target <= nums[right-1]){
		left = mid+1;
		//std::cout<<"left:"<<left<<" nums[mid]:"<<nums[mid]<<std::endl;
	    }else{
		right = mid;
		//std::cout<<"right:"<<right<<" nums[mid]:"<<nums[mid]<<std::endl;
	    }
	}else // nums[left]==nums[mid]
	    left++;
    }
    return -1;
}
