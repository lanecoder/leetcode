#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution{
public:
     int remove_element(vector<int> & num, int target){
	if(num.size() == 0)return 0;
	
	int length;
	//vector<int> ve = num;
	vector<int>::iterator it;
	for(it = num.begin(); it != num.end();){
	    if(*it == target) {it = num.erase(it);}
	    // the iterator now point to the next of the removed element
	    else ++it;
	}
	p_out(num);
	length = num.size();
	return length;
     }

     void p_out(vector<int> & num){
	for(int i = 0;i<num.size();i++){
	    cout<<num[i]<<endl;
	}
    }
};

int main(){

    int arr[6] = {1,2,2,2,4,7};
    vector<int> num(arr, arr+6);
    Solution s;
    int length = s.remove_element(num, 2);
    cout<<"length:"<<length<<endl;
    s.p_out(num);

    return 0;
}
