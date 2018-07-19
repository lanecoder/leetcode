#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

// the gray code is a binary numeral system where
// two successive values differ in only one bit.
// given a non-negative integer n representing the
// total number of bits in the code,print the sequence
// of gary code.a gray code sequence must begin with 0.
// for example,given n=2,return [0,1,3,2].its gray code
// sequence is:
// 00 - 0
// 01 - 1
// 11 - 3
// 10 - 2
//
// https://blog.csdn.net/pipisorry/article/details/72356418
// https://www.cnblogs.com/grandyang/p/4315649.html

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
