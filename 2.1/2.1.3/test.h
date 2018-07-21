#ifndef SOLUTION_H_
#define SOLUTION_H_
#include <iostream>
#include<vector>

// suppose a sorted array is rotated at some pivot unknown to you beforehand
// (i.e, 0 1 2 3 4 5 6 7might become 4 5 6 7 0 1 2).
//  you are given a target value to search.if found int the array return its index,otherwise return -1
//  you may assume no duplicate exists int the array

class Solution{
public:
   int search(const std::vector<int> & nums, int target);
};

#endif
