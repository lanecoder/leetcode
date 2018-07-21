#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    int cirtravel(vector<int> & gas, vector<int> & cost){
	
	int left = 0;
	int end = gas.size();

	int start = 0;
	int i = 0;
	int idex = 0;

	while(start<end){
	    left += gas[i]-cost[i];
	    if(left>=0) start++;
	    else{
		left = 0;
		start = 0;
		idex = (i+1)%gas.size();
	    }
	    i=(i+1)%gas.size();
	}

	return idex;
    }
};


int main(){

    //int arr[8] = {1,3,4,2,1,6,3,4};
    //int arr1[8] = {1,1,2,1,1,3,1,4};

    int arr[8] = {5,3,2,4,1,6,3,4};
    int arr1[8] = {4,3,5,5,2,3,2,4};

    vector<int> gas(arr, arr+8);
    vector<int> cost(arr1, arr1+8);

    Solution s;
    int res = s.cirtravel(gas, cost);
    cout<<res<<endl;
    return 0;
}
