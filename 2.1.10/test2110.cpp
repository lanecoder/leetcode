#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

class Solution{
public:
    set< vector<int> > fournum(vector<int> & num, int target){
	sort(num.begin(), num.end());

	int i = 0;
	int j = 0;
	int x = 0;
	int k = num.size()-1;
	set< vector<int> > se1;
	vector<int> temp(4);

	for(i;i<int(k-2);i++){
	   temp[0] = num[i];
	   for(j=i+1;j<int(k-1);j++){
		if(j > i+1 && num[j]==num[j-1])continue;
		temp[1] = num[j];
		x = j+1;
		while(x<k){
		    temp[2] = num[x]; temp[3] = num[k];
		    if((temp[0]+temp[1]+temp[2]+temp[3])==target){
			se1.insert(temp);
			x++; k--;		
		    }
		    else if((temp[0]+temp[1]+temp[2]+temp[3])>target)k--;
		    else j++;
		    
		    //while(num[x]==num[x-1])x++;
		    //while(num[k]==num[k+1])k--;
		}	
	   }
	}
    return se1;		
    }
};


int main(){

    int arr[6] = {-1, 0, 1, 0, 2, -2};
    vector<int> ve(arr, arr+6);
    Solution s;
    set< vector<int> > se = s.fournum(ve, 0);
   // set< vector<int> >::iterator ite1 = se.begin();
   // set< vector<int> >::iterator ite2 = se.end();
   // for(;ite1 != ite2;ite1++){
   //	for(int i = 0;i<(*ite1).size();i++){
   //	    cout<<(*ite1)[i]<<endl;
   //	}
   // }

    return 0;
}
