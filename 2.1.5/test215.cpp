#include<iostream>
#include<vector>

// leetocde: median of two sorted arrays
// there are two sorted arrays A and B of size m and n respectively.Find the median
// of the two sorted arrays.The overall run time complexity O(log(m+n)


using namespace std;

class Solution{
public:
    double findMedianSortedArrays(const vector<int> & A, const vector<int> & B){
	const int m = A.size();
	const int n = B.size();
	int total = m+n;
	if(total & 0x1)
		return find_kth(A.begin(), m, B.begin(), n, total/2+1);
	else
		return (find_kth(A.begin(), m, B.begin(), n, total/2)+find_kth(A.begin(), m, B.begin(), n, total/2+1))/2.0;
    }

private:
    static int find_kth(std::vector<int>::const_iterator A, int m, std::vector<int>::const_iterator B, int n, int k){
	// always assume that m is equal or smaller than n
	if(m > n) return find_kth(B, n, A, m, k);
	if(m == 0) return *(B+k-1);
	if(k == 1) return min(*A, *B);

	// divide k into two parts
	int pa = min(k/2, m);
	int pb = k - pa;
	if(*(A+pa-1)<*(B+pb-1))
	    return find_kth(A+pa, m-pa, B, n, k-pa);
	else if(*(A+pa-1)>*(B+pb-1))
	    return find_kth(A, m, B+pb, n-pb, k-pb);
	else
	    return A[pa-1];
	}
};

int main(){
    int arr1[] = {1,2,3,3,4,5,6};
    int arr2[] = {2,3,4,5,6,6,7,8};
    vector<int> v1(arr1, arr1+7);
    vector<int> v2(arr2, arr2+8);

    Solution s;
    cout<<s.findMedianSortedArrays(v1, v2)<<endl;
    return 0;
}
