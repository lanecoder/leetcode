#include <iostream>
#include <vector>
#include <map>
// given an unsorted array of integers,find the length of the longest consecutive sequence.
// for example,given [100,4,200,2,1,3],the longest consecutive sequence is [1,2,3,4].return
// its length:4
// your alorithm should run O(n) complexity.

using namespace std;

class Solution{
public:
    int longestConsective(const vector<int> &num){
	map<int,bool> use;
	
	//for (auto i : num){ use[i] = false;}
	for(int i = 0; i < num.size();i++){
	    use[num[i]] = false;
	}
	
	int longest = 0;
	
	for (int i = 0;i < num.size();i++){
	    if(use[num[i]]) continue;

	    use[num[i]] = true;

	    int length = 1;
	
	    for(int j = num[i]+1; use.count(j)!=0;j++){
		use[j]=true;
		length++;
	    }	
	    for(int j = num[i]-1; use.count(j)!=0;j--){
		use[j]=true;
		length++;
	    }
	    longest = max(longest, length);
	}
	return longest;
    }
};


int main(){
    int arr[9] = {3,5,2,7,6,8,100,65,87};
    vector<int> ve(arr, arr+9);
    Solution s;
    int length = s.longestConsective(ve);
    cout<<"the longest consective length is:"<<length<<endl;
    return 0;
}
