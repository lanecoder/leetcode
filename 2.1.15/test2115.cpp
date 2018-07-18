#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    int trap_water(vector<int> & num){
	int res = 0;
	int left = 0;
	int right = 0;
	int high = 0;

	cout<<num.size()<<endl;
	
	for(int i = 1;i<num.size();){
	     left = i-1;
	     right = i+1;

	     while(left>= 0 && num[left]>=num[left+1]){left--;}
	     while(right < num.size() && num[right]>=num[right-1]){right++;}
	     if(right>i+1)i=right;else i++;
	     cout<<"left: "<<left<<" right: "<<right<<endl;
	     if(left < i-1 && right > i+1){
	     if(num[left]>=num[right]){
		high = num[right];
		right--;left++;
		while(right>=left){res+=(high-num[right--]);}
		cout<<res;	
	     }else{
		high = num[left];
		right--;left++;
		while(left<=right){res+=(high-num[left++]);}
		cout<<res;
	     }}else i++;
	}
	
	return res;
    }
};


int main(){

    int arr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> ve(arr, arr+12);
    Solution s;
    int water = s.trap_water(ve);
    cout<<"trap water: "<<water<<endl;
    return 0;
}
