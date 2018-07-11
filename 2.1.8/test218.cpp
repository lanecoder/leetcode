#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    vector< vector<int> > threesum(vector<int> num){
	sort(num.begin(), num.end());
	int i = 0;
	int j = 0;
	int k = num.size()-1;
	int twosum = 0;
	vector< vector<int> > vt;
	vector<int> t(3);
	
	for(;i < k-1;){
	   //vector<int> t(3);
	   t[0] = num[i];
	   twosum = 0 - num[i];
	   
	   for(j=i+1,k=num.size()-1;j<k;){
		if(num[j]+num[k]==twosum){
		    t[1] = num[j++];
		    t[2] = num[k--];
		    vt.push_back(t);
		}
		if(num[j]+num[k]<twosum)j++;
		if(num[j]+num[k]>twosum)k--;
		
		// avoid near elment duplicated
		while(j<k && num[j]==num[j-1]){j++;}
		while(j<k && num[k]==num[k+1]){k--;}
	   }
	   i++;
	   // avoid near elements duplicated
	   while(i < k && num[i]==num[i-1]){i++;}
    }
    return vt;
  }
};

int main(){
    int arr[6] = {-1,0,1,2,-1,-4};
    vector<int> ve(arr, arr+6);
    Solution s;
    vector< vector<int> > ve1 = s.threesum(ve);
    for(int i = 0;i< ve1.size();i++){
	vector<int> vx = ve1[i];
	cout<<"the "<<i+1<<"vector: "<<endl;
	for(int j = 0;j<vx.size();j++){
	    cout<<vx[j]<<endl;
	}
    }
    return 0;
}
