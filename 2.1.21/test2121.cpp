#include<iodtream>
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

	for(int i = 0;i<cir;){
	    
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
