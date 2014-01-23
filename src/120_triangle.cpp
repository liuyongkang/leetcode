// =====================================================================================
// 
//       Filename:  120_triangle.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 10时28分01秒
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

int minimumTotal(vector<vector<int>> &triangle)
{
	int n = triangle.size();
	int dp[n][n];

	dp[0][0] = triangle[0][0];
	for (int i = 1; i != n; ++i) {
		dp[i][0] = dp[i - 1][0] + triangle[i][0];
		for (int j = 1; j != n - 1; ++j) {
			dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j]) + triangle[i][j];
		}
		dp[i][i] = dp[i - 1][i - 1] + triangle[i][i];
	}

	int ans = dp[n - 1][0];
	for (int i = 1; i != n; ++i) {
		if (dp[n - 1][i] < ans) {
			ans = dp[n - 1][i];
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

