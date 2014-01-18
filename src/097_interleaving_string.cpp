// =====================================================================================
// 
//       Filename:  097_interleaving_string.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 10时27分47秒
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

bool isInterleave(string s1, string s2, string s3)
{
	int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
	int dp[n1 + 1][n2 + 1];

	if (n1 + n2 != n3) {
		return false;
	}

	dp[0][0] = 1;
	for (int i = 1; i <= n2; ++i) {
		if (dp[0][i - 1] && s2[i - 1] == s3[i - 1]) {
			dp[0][i] = 1;
		} else {
			dp[0][i] = 0;
		}
	}

	for (int i = 1; i <= n1; ++i) {
		if (dp[i - 1][0] && s1[i - 1] == s3[i - 1]) {
			dp[i][0] = 1;
		} else {
			dp[i][0] = 0;
		}
	}

	for (int i = 1; i <= n1; ++i) {
		for (int j = 1; j <= n2; ++j) {
			if ((dp[i][j - 1] && s2[j - 1] == s3[i + j - 1]) ||
				(dp[i - 1][j] && s1[i - 1] == s3[i + j - 1])) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = 0;
			}
		}
	}

	return dp[n1][n2];
}

int main(int argc, char *argv[])
{
	isInterleave(string("c"), string("a"), string("ca"));


	return 0;
}

