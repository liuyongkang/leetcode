// =====================================================================================
// 
//       Filename:  122_best_time_to_buy_and_sell_stock_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 11时15分19秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 贪心
 */

#include "leetcode.h"

int maxProfit(vector<int> &prices)
{
	int n = prices.size();

	if (n <= 1) {
		return 0;
	}

	int ans = 0;
	for (int i = 1; i != n; ++i) {
		if (prices[i] > prices[i - 1]) {
			ans += prices[i] - prices[i - 1];
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

