#include<iostream>

// another implemention of searching median
// in two sorted arrays

using namespace std;

class Solution{
public:
    //std::vector<int> vt;
    int findMedianSortedArr(const std::vector<int> & v1, const std::vector<int> & v2){
	int totalsize = v1.size()+v2.size();
	std::vector<int> vt(totalsize);
	if(v1.size() == 0 && v2.size() == 0) return 0;
	if(v1.size() == 0) return (double)v2.size()%2?v2[v2.size()/2]:((v2[v2.size()/2-1]+v2[v2.size()/2])/2.0);
	if(v2.size() == 0) return (double)v1.size()%2?v1[v1.size()/2]:((v1[v1.size()/2-1]+v1[v1.size()/2])/2.0);
	double result = find_kth(vt, v1.begin(), v1.end(), v2.begin(), v2.end());
	cout<<result<<endl;
    }


    double find_kth(const std::vector<int> & v, std::vector<int>::const_iterator A, std::vector<int>::const_iterator Aend, std::vector<int>::const_iterator B, std::vector<int>::const_iterator Bend){
	if(A==Aend && B !=Bend){
 	    v.push_back(*(B));
	    return find_kth(v, A, B++);
	}
	if(B==Bend && A != Aend){
	    v.push_back(*(A));
	    return find_kth(v, A++, B);
	}
	if(A==Aend && B==Bend){
	    return (double)v.size()%2?v[v.size()/2]:((v[v.size()/2-1]+v[v.size()/2])/2.0);
	}
	if(*(A) < *(B)){
	    v.push_back(*(A));
	    return find_kth(v, A++, B);
	}
	if{
	    v.push_back(*(B));
	    return find_kth(v, A, B++);
	}    
}
};

int main(){

    Solution s;
    int arr1[7] = {1,2,3,4,4,5,6};
    int arr2[8] = {3,3,4,5,6,7,8,9};
    vector<int> v1(arr1, arr1+7);
    vector<int> v2(arr2, arr2+8);
    s.findMedianSortedArr(v1, v2);

    return 0;
}
