#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    int candy(vector<int> & num){
	
	int n = num.size();
	vector<int> candy(n,1);
	num[0] = 1;	

	for(int i=0;i<n;i++){
	    if(num[i]>num[i-1]){candy[i]=candy[i-1]+1;};
	}

	for(int i=n-1;i>0;i--){
	    if(num[i-1]>num[i]){candy[i-1]=max(candy[i-1], candy[i]+1);};
	}

	int res = 0;
	for(int j=0;j<candy.size();j++){
	    res+=candy[j];
	}
	
	//for(int i:candy){res+=i;}

	return res;
    }
};


int main(){

   int arr[8] = {1,3,4,2,1,6,3,4};
   vector<int> rating(arr, arr+8);
   Solution s;
   int res = s.candy(rating);
   cout<<res<<endl;

    return 0;    
}
