#include <iostream>
#include <vector>
#include <unordered_map>
// given an unsorted array of integers,find the length of the longest consecutive sequence.
// for example,given [100,4,200,2,1,3],the longest consecutive sequence is [1,2,3,4].return
// its length:4
// your alorithm should run O(n) complexity.

using namespace std;

class Solution{
public:
    int longestConsective(const vector<int> &num){
	unordered_map<int,bool> use;
	for(auto i : num){ use[i] = false;}
	
	int longest = 0;
	
	for(auto i : num){
	    if(use[i]) continue;

	    use[i] = true;

	    int length = 1;
	
	    for(int j = i+1; use.find(j)!=use.end();j++){
		use[j]=true;
		length++;
	    }	
	    for(int j = i-1; use.find(j)!=use.end();j--){
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
