#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

class Solution{
public:
    vector< vector<int> > fournum(vector<int> & num, int target){
	sort(num.begin(), num.end());
	vector< vector<int> > se1;
	if(num.size() < 4)return se1;
	int i = 0; int j = 0;
	int x = 0;
	int k = num.size()-1;
	
	vector<int> temp(4);

	for(i;i<k-2;i++){
	   temp[0] = num[i];
	   for(j=i+1;j<k-1;j++){
		if(j > i+1 && num[j]==num[j-1])continue;
		temp[1] = num[j];
		x = j+1;
		while(x<k){
		    temp[2] = num[x]; temp[3] = num[k];
		    if((temp[0]+temp[1]+temp[2]+temp[3])==target){
			se1.push_back(temp);
			x++; k--;		
		    }
		    else if((temp[0]+temp[1]+temp[2]+temp[3])>target)k--;
		    else x++; 
		}	
	   }
	}
    return se1;
    }

    void print_out(vector< vector<int> > & num){
	for(int i = 0;i<num.size();i++){
	    vector<int> ve = num[i];
	    for(int j = 0;j<ve.size();j++){
		cout<<"ve["<<j<<"]: "<<ve[j]<<" ";
	    }
	    cout<<endl;
	}
    }
};


int main(){

    int arr[6] = {-1, 0, 1, 0, 2, -2};
    vector<int> ve(arr, arr+6);
    Solution s;
    cout<<"begin"<<endl;
    vector< vector<int> > se = s.fournum(ve, 0);
    s.print_out(se);
    return 0;
}
