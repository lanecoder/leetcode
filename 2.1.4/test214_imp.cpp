#include <iostream>

// this is the implement of SearchElementInARotatedArray,
// which ask you to search for the rotation pivot.there is
// a subtle observation.
// this problem is in fact the same as finding the minimum element'x index.
// if the middle element is greater than the rightest most element,then the
// pivot must be to the right;if it is not,the pivot must be to the left.
// comment:if you draw lesson from this case,you should make sure yourself
// to compile the code correctly and run successfully,because i just give 
// my mind with coding simply for you.if you have some more problems,i suggest
// that you can browse a website like https://articles.leetcode.com/.


int rotated_binary_search(int A[], int N, int key){
    int L = 0;
    int R = N - 1;

    while(A[L]>A[R]){
	int M = L + (R - L)/2;
	if(A[M]>A[R])
	   L = M + 1;
	else
	   R = M;
    }
    return L;
}
