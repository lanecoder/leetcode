#include <iostream>
#include "test.h"

int main(){
    using std::cout;
    using std::endl;

    Solution s;
    int arr[10] = {9,10,11,1,2,3,5,6,7,8};
    std::vector<int> nums(arr, arr+10);
    int idex = s.search(nums, 9);
    cout<<idex<<endl;

    return 0; 
    
}
