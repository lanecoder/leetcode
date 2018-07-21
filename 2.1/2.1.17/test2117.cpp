#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    void digit_test(vector<int> & num, int target){
	
	int n = num.size();
	int i = n-1;
	int dig = target;
	while(i>=0){
	if((num[i]+dig)>9){
	    if(i==0){
		num.insert(num.begin(), 1);
		break;
	    }
	    num[i--] = 0;
	    dig = 1;
	}else{
	    num[i]+=dig;
	    break;
	}
	}
    }

    void print_out(vector<int> & num){
	for(int i = 0;i<num.size();i++){
	     cout<<num[i]<<endl;
	}
    }
};

int main(){

    int arr[6] = {0,4,9,9,9,9};
    vector<int> ve(arr, arr+6);
    Solution s;
    s.digit_test(ve, 1);
    s.print_out(ve);
    return 0;
}
