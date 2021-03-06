#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

// the set [1,2,3...n] contains a total of !n unique permulation
// by listing and labeling all of the permulation in order,we get
// the following sequence(ie,for n=3):
// "123" "132" "213" "231" "312" "321"
// given n and k,return the kth permulation sequence
// note:given n will be between 1 and 9 inclusive

using namespace std;

class Solution{
public:
    string find_kth(int n, int k){
	
	string res;
	string num = "123456789";
	vector<int> ve(n,1);
	
	for(int i = 1;i<n;i++)ve[i]=ve[i-1]*i; // !n
	--k;   // match to the index of array

	for(int i = n;i>=1;i--){
	    int j = k / ve[i-1]; // hignest index of the kth permulation
	    k %= ve[i-1];	 // calc the new 'k'
	    res.push_back(num[j]);
	    num.erase(j,1);
	}

    return res;
    }
};


int main(){

    Solution s;
    string s1 = s.find_kth(4, 15);
    cout<<s1<<endl;

    return 0;
}
