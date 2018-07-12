#include<iostream>
#include<vector>
#include<algorithm>

// 3Sum Closest
// given an array of n integers,find these integers in S such that the sum
// is closest to a given number target.return the sum of the three integers.
// you may assume that each input would have exactly one slution.
// for example,given array S = {-1, 2, 1, -4},and target = 1.
// the sum that is closeer to the target is 2.{-1+2+1=2}.

using namespace std;

class Solution{
public:
   vector<int> closesum(vector<int> & num, int target){
	sort(num.begin(), num.end());
	int i = 0;
	int j = 0;
	int k = num.size()-1;
	int sum = 0;
	int close = 0;
	vector<int> v(3);

	for(;i<k-1;){
	    v[0] = num[i];

	    for(j=i+1;j<k;){
		if(num[j]+num[k] == target-num[i]){
		    v[1] = num[j];
		    v[2] = num[k];
		    close = v[0]+v[1]+v[2]-target;
		    break;	    
		}
		if(num[j]+num[k] > target-num[i]){ // bigger than target
		    v[1] = num[j++];
		    v[2] = num[k];
		    if(labs(v[0]+v[1]+v[2])<close){
			close = labs(target-(v[0]+v[1]+v[2]));
		    }
		}
		if(num[j]+num[k] < target - num[i]){
		    v[1] = num[j];
		    v[2] = num[k--];
		    if(labs(v[0]+v[1]+v[2])<close){
			close = labs(target-(v[0]+v[1]+v[2]));
		    }
		}
	   
	    while(num[j]==num[j-1])j++;
	    while(num[k]==num[k+1])k--;	
	    }
	   while(num[i]==num[i-1])i++;
	}
	
	return v;
   }
};


int main(){

    int arr[4] = {-1,2,1,-4};
    vector<int> ve(arr, arr+4);
    Solution s;
    vector<int> ve1 = s.closesum(ve, 1);
    for(int i = 0;i<ve1.size();i++){
	cout<<ve1[i]<<endl;
    }   
    return 0;
}
