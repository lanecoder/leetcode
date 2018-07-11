// given an array of integers,find two numbers such that they add up to a specific target number.
// the function twosum should return indices of the two numbers such that they add up to the target,
// where index must be less than index2.Please note that your return answers(both index and index2)
// are not zero_based.

#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution{
public:
    vector<int> findtwonumber(vector<int> & source, int target){
	map<int,int>  map1;
	int num = source.size();
	for(int i = 0; i < source.size();i++) {map1[source[i]]=i;}

	vector<int> result;

	for(int i = 0; i< num;i++){
	    int sourcetwo = target - source[i];
	    if(map1.count(sourcetwo) != 0 && map1[sourcetwo] > i){
		result.push_back(i);
		result.push_back(map1[sourcetwo]);
		break;
	    }
	}
	return result;
    }
};

int main(){

    int arr[6] = {1,6,8,3,4,5};
    vector<int> ve(arr, arr+6);
    Solution s;
    vector<int> idex = s.findtwonumber(ve, 7);
    //vector<int>::iterator it;
    for(int i = 0;i <= idex.size();i++){
	cout<< idex[i] << endl;
    }
    return 0;
}
