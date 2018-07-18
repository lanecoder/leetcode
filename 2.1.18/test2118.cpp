#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
   int climb_stair(int n){
	
	if(n<=2){return n;}

	int * num = new int[n+1];
	
	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	
	for(int i = 3;i<n+1;i++){
	    num[i]=num[i-1]+num[i-2];
	}
	//cout<<num[n]<<endl;
	return num[n];	
   }
};

int main(){

    Solution s;
    int res=0;
    cin>>res;
    int result = s.climb_stair(res);
    cout<<result<<endl;

    return 0;
}
