// =====================================================================================
// 
//       Filename:  052_maximum_subarray.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 11时29分03秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 动态规划
 */

#include "leetcode.h"

int maxSubArray(int A[], int n)
{
	int sum = 0;
	int max = 0;

	for (int i = 0; i != n; ++i) {
		sum += A[i];
		if (sum < 0) {
			sum = 0;
		} else if (sum > max) {
			max = sum;
		}
	}

	if (max == 0) {
		max = A[0];
		for (int i = 1; i != n; ++i) {
			if (A[i] > max) {
				max = A[i];
			}
		}
	}
	
	return max;
}

int main(int argc, char *argv[])
{


	return 0;
}

