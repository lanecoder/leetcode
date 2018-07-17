#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

class Solution{
public:
     void next_permulation(vector<int> & num){
	int idex = num.size()-1;
	while(num[idex]<=num[idex-1]){
		--idex;
	}
	if(idex==0)
	    sort(num.begin(), num.end());
	return ;

	int second = INT_MAX;
	int secondIndex = INT_MAX;
	for(int i = num.size()-1;i>=idex-1;--i){
	    if(num[i]>num[idex-1]){
		if(num[i]<second){
		    second = num[i];
		    secondIndex = i;
		}
	    }
	}
	
	int temp = num[idex-1];
	num[idex-1] = num[secondIndex];
	num[secondIndex] = temp;

	sort(num.begin()+idex,num.end());

	for(int k = 0;k<num.size();k++){
	    cout<<num[k]<<endl;
	}
     }
};


int main(){

    int arr[7] = {6,5,4,8,7,5,1};
    vector<int> ve(arr, arr+7);
    Solution s;
    s.next_permulation(ve);

    return 0;
}
