// =====================================================================================
// 
//       Filename:  115_distinct_subsequences.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月19日 18时09分28秒
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

int numDistinct(string S, string T)
{
	int ns = S.size(), nt = T.size();

	if (ns < nt) {
		return 0;
	}

	//int dp[nt + 1][ns + 1];
	int dp[4][5];

	for (int i = 0; i != ns + 1; ++i) {
		dp[0][i] = 1;
	}

	for (int i = 1; i != nt + 1; ++i) {
		if (T[i - 1] == S[i - 1]) {
			dp[i][i] = dp[i - 1][i - 1];
		} else {
			dp[i][i] = 0;
		}
		for (int j = i + 1; j <= ns + 1; ++j) {
			if (T[i - 1] == S[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1];
			} else {
				dp[i][j] = 0;
			}
			dp[i][j] += dp[i][j - 1];
		}
	}

	return dp[nt][ns];
}

int main(int argc, char *argv[])
{


	return 0;
}

