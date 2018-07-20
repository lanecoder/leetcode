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
	    i = (i+1)%gas.size();
	    if(left>=0) start++;
	    else{
		left = 0;
		start = 0;
		idex = (i+1)%gas.size();
	    }
	}

	return idex;
    }
};
