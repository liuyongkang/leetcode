// =====================================================================================
// 
//       Filename:  041_trapping_rain_water.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月16日 17时03分11秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 找出每个位置左边的最大值和右边的最大值，就是求出结果，时间复杂度O(n)，空间复杂度O(n)
 */

#include "leetcode.h"

int trap(int A[], int n)
{
	int left_max[n], right_max[n];

	left_max[0] = 0;
	for (int i = 1; i < n; ++i) {
		left_max[i] = max(left_max[i - 1], A[i - 1]);
	}

	right_max[n - 1] = 0;
	for (int i = n - 2; i >=0 ; --i) {
		right_max[i] = max(right_max[i + 1], A[i + 1]);
	}
	
	int ans = 0;
	for (int i = 1; i < n - 1; ++i) {
		if (min(left_max[i], right_max[i]) > A[i]) {
			ans += min(left_max[i], right_max[i]) - A[i];
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

