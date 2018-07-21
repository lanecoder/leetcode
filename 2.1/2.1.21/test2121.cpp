#include<iostream>
#include<vector>

//https://www.cnblogs.com/grandyang/p/4266812.html

using namespace std;

class Solution{
public:
    int cirtravel(vector<int> & gas, vector<int> & cost){
	
	int cir = gas.size();
	int total = 0;
	int sum = 0;
	int start = 0;

	for(int i = 0;i<cir;++i){
	    
	    total += (gas[i]-cost[i]);
	    sum += (gas[i]-cost[i]);
	    if(sum < 0){
		sum = 0;
		start = i+1;
	    }
	}

	return (total<0)?-1:start;	
    }
};


int main(){

    //int arr[8] = {1,3,4,2,1,6,3,4};
    //int arr1[8] = {1,1,2,1,1,3,1,4};
    
    int arr[8] = {5,3,2,4,1,6,3,4};
    int arr1[8] = {4,3,5,5,2,3,2,4};
    vector<int> ga(arr, arr+8);
    vector<int> co(arr1, arr1+8);
    Solution s;
    int result = s.cirtravel(ga,co);
    cout<<result<<endl;

    return 0;
}
