#include<iostream>
#include<vector>

// genius!

using namespace std;

class Solution{
public:
    int single_one(vector<int> & num){
	
	int res = 0;
	for(int i=0;i<num.size();i++){
	    res^=num[i];
	}

	return res;
    }
};


int main(){

    int arr[9] = {2,3,4,5,1,3,2,4,5};
    vector<int> num(arr, arr+9);

    Solution s;
    int res = s.single_one(num);
    cout<<res<<endl;
}
