// =====================================================================================
// 
//       Filename:  061_unique_paths.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 17时49分48秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 简单的动态规划
 */

#include "leetcode.h"

int uniquePaths(int m, int n)
{
	int dp[m][n];

	for (int i = 0; i != n; ++i) {
		dp[0][i] = 1;
	}

	for (int i = 0; i != m; ++i) {
		dp[i][0] = 1;
	}

	for (int i = 1; i != m; ++i) {
		for (int j = 1; j != n; ++j) {
			dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
		}
	}

	return dp[m - 1][n - 1];
}

int main(int argc, char *argv[])
{


	return 0;
}

