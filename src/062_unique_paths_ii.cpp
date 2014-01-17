// =====================================================================================
// 
//       Filename:  062_unique_paths_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 17时56分22秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 对上一题进行一点修改
 */

#include "leetcode.h"

int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
	int m = obstacleGrid.size(), n = obstacleGrid[0].size();
	int dp[m][n];

	dp[0][0] = 1 - obstacleGrid[0][0];
	for (int i = 1; i != n; ++i) {
		if (dp[0][i - 1]) {
			dp[0][i] = 1 - obstacleGrid[0][i];
		} else {
			dp[0][i] = 0;
		}
	}

	for (int i = 1; i != m; ++i) {
		if (dp[i - 1][0]) {
			dp[i][0] = 1- obstacleGrid[i][0];
		} else {
			dp[i][0] = 0;
		}
	}

	for (int i = 1; i != m; ++i) {
		for (int j = 1; j != n; ++j) {
			if (obstacleGrid[i][j]) {
				dp[i][j] = 0;
			} else {
				dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
			}
		}
	}

	return dp[m - 1][n - 1];
}

int main(int argc, char *argv[])
{


	return 0;
}

