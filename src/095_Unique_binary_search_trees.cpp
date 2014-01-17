// =====================================================================================
// 
//       Filename:  095_Unique_binary_search_trees.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 18时25分39秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 其实这个解法应该是动态规划
 */

#include "leetcode.h"

int numTrees(int n)
{
	int num[n + 1];

	num[0] = 1;
	for (int i = 1; i <= n; ++i) {
		num[i] = 0;
		for (int j = 0; j != i; j++) {
			num[i] += num[j] * num[i - j - 1];
		}
	}

	return num[n];
}

int main(int argc, char *argv[])
{


	return 0;
}

