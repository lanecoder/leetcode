#include<iostream>
#include<vector>

// amazing,this case is refered to a great idea online
// https://blog.csdn.net/camellhf/article/details/52938018

using namespace std;

class Solution{
public:
    int single_one(vector<int> & num){
	
	int n = num.size();
	int res = 0;
	
	for(int i=0;i<32;i++){
	
	    int sum = 0;
			
	    for(int j=0;j<n;j++){
		if((num[j]>>i)&1){
		    sum++;
		}
	    }

	    if(sum%3){
		res |= (1<<i);	
	    }
	}

	return res;
    }
};


int main(){

    int arr[10] = {3,4,7,4,3,7,7,4,3,5};
    vector<int> ve(arr, arr+10);
    Solution s;
    int res = s.single_one(ve);
    cout<<res<<endl;
    return 0;
}
