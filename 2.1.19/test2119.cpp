#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

class Solution{
public:
    vector<int> get_graycodes(int n){
	vector<int> res;

	if(n == 0 || n == 1) {
	    res.push_back(n);
	    return res;
	} 

	for(int i=0;i<pow(2,n);i++){
	    res.push_back(int((i>>1)^i));
	}

    return res;	
    }

    void print_out(const vector<int> & num){
	for(int i=0;i<num.size();i++){
	    cout<<num[i]<<endl;
	}
    }
};


int main(){

    Solution s;
    vector<int> ve = s.get_graycodes(4);
    s.print_out(ve);
    return 0;
}
