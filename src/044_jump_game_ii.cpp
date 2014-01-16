// =====================================================================================
// 
//       Filename:  044_jump_game_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月16日 21时01分48秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 用一个数组来标记到每个位置的最少jump，时间复杂度O(n)，空间复杂度O(n)
 */

#include "leetcode.h"

int jump(int A[], int n)
{
	int num[n];
	int cur_longest = 0;

	num[0] = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (A[i] + i > cur_longest) {
			for (int j = cur_longest + 1; j <= A[i] + i; ++j) {
				num[j] = num[i] + 1;
			}
			cur_longest = A[i] + i;
		}
	}

	return num[n - 1];
}

int main(int argc, char *argv[])
{


	return 0;
}

