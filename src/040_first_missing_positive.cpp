// =====================================================================================
// 
//       Filename:  040_first_missing_positive.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月16日 16时43分18秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 调整正数的到特定位置，然后就可找到，时间复杂度O(n)，空间复杂度O(1)
 */

#include "leetcode.h"

int firstMissingPositive(int A[], int n)
{
	int i = 0;
	while (i < n) {
		if (A[i] > 0 && A[i] < n && A[i] != A[A[i] - 1]) {
			swap(A[i], A[A[i] - 1]);
		} else {
			++i;
		}
	}

	int ans = n + 1;
	for (int i = 0; i != n; ++i) {
		if (A[i] != i + 1) {
			ans = i + 1;
			break;
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{
	int A[] = {-1,4,2,1,9,10};
	cout << firstMissingPositive(A, 6) << endl;


	return 0;
}

