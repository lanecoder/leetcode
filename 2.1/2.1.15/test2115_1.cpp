#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    int trap_water(vector<int> & num){
	int res = 0;
	int l = 0;
	int r = num.size()-1;
	int high = 0;

	while(l < r){
	    high = min(num[l], num[r]);
	    if(high==num[l]){
		l++;
		while(l<r && num[l]<high){
		    res+=(high-num[l++]);
		}
	    }else{
		r--;
		while(l<r && num[r]<high){
		    res+=(high-num[r--]);
		}
	    }
	}

	return res;
    }
};

int main(){

    int arr[12] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> ve(arr, arr+12);
    Solution s;
    int water = s.trap_water(ve);
    cout<<water<<endl;

    return 0;
}
