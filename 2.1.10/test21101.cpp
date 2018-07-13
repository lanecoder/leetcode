//作者：Nautilus1
//链接：https://www.jianshu.com/p/17156a5810ad
//來源：简书
//简书著作权归作者所有，任何形式的转载都请联系作者获得授权并注明出处。

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int>& nums, int target) {
        vector< vector<int> > ans;
        if (nums.size() < 4) return ans;
        
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i ++)
        {
            for (int j = i + 1; j < nums.size() - 2; j ++)
            {
                int l = j + 1, r = nums.size() - 1;
                while(l < r)
                {
                    if (nums[i] + nums[j] + nums[l] + nums[r] < target)
                        l ++;
                    else if (nums[i] + nums[j] + nums[l] + nums[r] > target)
                        r --;
                    else
                    {
                        vector<int> v1;
			v1.push_back(nums[i]);
			v1.push_back(nums[j]); 
			v1.push_back(nums[l]);
			v1.push_back(nums[r]);
			ans.push_back(v1);
                        l ++;
                        r --;
                    }
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());          //erase函数删除两迭代器之间的元素，unique返回的是重排后第一个多余元素的位置
        return ans;
    }
};

int main(){
    int arr[6] = {-1, 0, 1, 0, -2, 2};
    vector<int> ve(arr, arr+6);
    Solution s;
    vector< vector<int> > ve1 = s.fourSum(ve, 0);
    cout<<"haha"<<endl;
    return 0;
}
