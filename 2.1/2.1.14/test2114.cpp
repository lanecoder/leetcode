#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

// valid sudoku

using namespace std;

class Solution{
public:
    bool ifvalid(vector< vector<char> > & num){
	int ve_size = num.size();

	map<char, bool> ma1;
	map<char, bool> ma2;
	map<char, bool> ma3;
	
	for(int i=0;i<ve_size;i++){
	    int j = num[i].size();
	
	    if(ma1[num[i][j]] != '.'){
		if(ma1[num[i][j]] == true)return false;
		ma1[num[i][j]] = true;
	    }

	    if(ma2[num[j][i]] != '.'){
		if(ma2[num[j][i]] == true)return false;
		ma2[num[j][i]] = true;
	    }

	    if(ma3[num[i/3*3+j/3][i%3*3+j%3]] != '.'){
		if(ma3[num[i/3*3+j/3][i%3*3+j%3]] == true) return false;
		ma3[num[i/3*3+j/3][i%3*3+j%3]] = true;
	    }
	}

	return true;
    }
};
