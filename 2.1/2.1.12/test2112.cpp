#include<iostream>
#include<vector>
#include<algorithm>

using namespace std; // only use in test case

class Solution{
public:
    vector<int> next_permulation(vector<int> & num){
	int i, j, n = num.size();
	
	for(i = n-2;i>=0;--i){
	    if(num[i+1]>num[i]){
		for(j = n-1;j>i;--j){
		    if(num[j]>num[i])break;
		}
	    swap(num[j], num[i]);
	    reverse(num.begin()+i+1, num.end());
	    //return;
	    }
	}
    reverse(num.begin(), num.end());
    }

    void print_out(vector<int> & num){
	int length = num.size();
	for(int i =0;i<length;i++){
	    cout<<i+1<<" : "<<num[i]<<endl;
	}
    }
};


int main(){

    int arr[3] = {1,1,5};
    vector<int> ve(arr, arr+3);
    Solution s;
    vector<int> next = s.next_permulation(ve);
    s.print_out(next);
    return 0;
}
