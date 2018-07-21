#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
    void rotate_image(vector< vector<int> > & num){

	int n = num.size();

	for(int i=0;i<n;i++){
	    for(int j=0;j<n-i;j++){
		swap(num[i][j], num[n-1-j][n-1-i]);
	    }
	}

	for(int i=0;i<n/2;i++){
	    for(int j=0;j<n;j++){
		swap(num[i][j], num[n-1-i][j]);
	    }
	}	
    }

    void print_out(vector< vector<int> > & num){
	for(int i=0;i<num.size();i++){
	     for(int j=0;j<num.size();j++){
		cout<<num[i][j]<<" ";
	     }
	cout<<endl;
	}
    }
};


int main(){

    vector< vector<int> > ve;
    int a1[4] = {3,2,4,1};
    int a2[4] = {5,9,0,2};
    int a3[4] = {7,4,8,9};
    int a4[4] = {4,8,7,2};
    vector<int> v1(a1, a1+4);
    vector<int> v2(a2, a2+4);
    vector<int> v3(a3, a3+4);
    vector<int> v4(a4, a4+4);
    ve.push_back(v1);
    ve.push_back(v2);
    ve.push_back(v3);
    ve.push_back(v4);
    Solution s;
    s.rotate_image(ve);
    s.print_out(ve);

    return 0;
}
