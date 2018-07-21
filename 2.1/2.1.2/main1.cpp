#include<iostream>
#include "lc.h"

int main(){

    Solution s;
    int arr[12] = {1,2,3,3,3,3,6,6,7,8,8,9};
    std::vector<int> nums(arr, arr+12);
    int idex = s.removeduplicates(nums);
    std::cout<<idex<<std::endl;
    // todo: return the array after removing duplicates
    return 0;
}
