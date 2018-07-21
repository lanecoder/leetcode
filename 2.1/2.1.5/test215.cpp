#include<iostream>
#include<vector>
#include<stdint.h>

class Solution{
public:
    double findMedianInTwoSortedArrays(std::vector<int> & num1, std::vector<int> & num2){
	if(num1.size() == 0) return MedianSortedArrays(num2);
	if(num2.size() == 0) return MedianSortedArrays(num1);

	int n = num1.size();
	int m = num2.size();
	if(n > m) return findMedianInTwoSortedArrays(num2, num1);
	
	int c1,c2,L1,L2,R1,R2;
	int lo = 0;
	int hi = 2n+1;

	while(lo <= hi){
	   c1 = (lo+hi)/2;
	   c2 = m+n-c1;
		
	   L1 = if(c1==0)?INT_MIN:num1[(c1-1)/2];
	   R1 = if(c1==2*n)?INT_MAX:num1[c1/2];
	   R1 = if(c2==0)?INT_MIN:num2[(c2-1)/2];
	   R2 = if(c2==2*m)?INT_MAX:num2[c2/2];

	if(L1>R2){
	   hi = c1-1;
	}
	else if(L2>R1){
	   lo = c1+1;
	}
	else{ // L1<R2&&L2<R1
	   break;
	}
	}
	return (max(L1,L2)+min(R1,R2))/2.0; 
    }

    double MedianSortedArrays(vector<int> & num){
	if(num.size()==0) return -1;
	return (num[num.size()/2]+num[(num.size()-1)/2])/2.0;
    }
};
