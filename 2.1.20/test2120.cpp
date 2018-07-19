#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
    void set_matrix(vector< vector<int> > & num){

	int m = num.size();
	int n = num[0].size();

	bool firstline = false;
	bool firstrow = false;

	if(m == 0 || n == 0) return; // end the process

	// check the first line and first row		
	for(int i = 0;i<m;i++){
	    if(num[i][0] == 0)firstrow=true;
	}

	for(int j = 0;j<n;j++){
	    if(num[0][j] == 0)firstline=true;
	}

	for(int i = 1;i<m;i++){
	    for(int j = 1;j<n;j++){
		if(num[i][j]==0){
		    num[i][0] = 0; // first row record lines;
		    num[0][j] = 0; // first line record rows 
		}
	    }
	}

	for(int i = 1; i<m;i++){
	    for(int j = 1;j<n;j++){
		if(num[i][0]==0 || num[0][j]==0)num[i][j]=0;
	    }
	}
	
	// set_zero_operation
	for(int i = 0;i<m;i++){
	    for(int j = 0;j<n;j++){
		if(num[i][0] == 0 && num[0][j] == 0){
			num[i][j] == 0
		}	
	    }
	}

	// check the first row and the first line
	if(firstline==0){
	   for(int j = 0;j<n;j++){
		num[0][j]=0;		
	   }
	}

	if(firstrow==0){
	   for(int i = 0;i<m;i++){
		num[i][0]=0;
	   }
	}	
	
    }


    void print_out(vector< vector<int> & num>){
	int m = num.size();
	int n = num[0].size();

	if(m==0){
	    for(int j=0;j<n;i++){
		cout<<num[0][j]<<endl;
	    }
	}

	if(n==0){
	    for(int i=0;i<m;i++){
		cout<<num[i][0]<<endl;
	    }
	}

	for(int i = 0;i<m;i++){
	    for(int j = 0;j<n;j++){
		cout<<num[i][j]
	    }
	cout<<endl;
	}	
    }
};
