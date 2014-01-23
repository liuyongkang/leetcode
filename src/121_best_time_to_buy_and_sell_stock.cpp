// =====================================================================================
// 
//       Filename:  121_best_time_to_buy_and_sell_stock.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 10时41分34秒
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

	if (n == 0) {
		return 0;
	}

	int ans = 0, min_price = prices[0];

	for (int i = 0; i != n; ++i) {
		if (prices[i] - min_price > ans) {
			ans = prices[i] - min_price;
		}
		if (prices[i] < min_price) {
			min_price = prices[i];
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

