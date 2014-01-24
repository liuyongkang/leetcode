// =====================================================================================
// 
//       Filename:  123_best_time_to_buy_and_sell_stock_iii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 11时42分42秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 也不算动态规划啊。。。
 */

#include "leetcode.h"

int maxProfit(vector<int> &prices)
{
	int n = prices.size();

	if (n <= 1) {
		return 0;
	}

	int front[n], back[n], min_prices, max_prices, max_profit;

	max_profit = 0;
	front[0] = 0;
	min_prices = prices[0];
	for (int i = 1; i != n; ++i) {
		if (prices[i] - min_prices > max_profit) {
			max_profit = prices[i] - min_prices;
		}
		front[i] = max(max_profit, front[i - 1]);
		if (prices[i] < min_prices) {
			min_prices = prices[i];
		}
	}

	max_profit = 0;
	back[n - 1] = 0;
	max_prices = prices[n - 1];
	for (int i = n - 2; i >= 0; --i) {
		if (max_prices - prices[i] > max_profit) {
			max_profit = max_prices - prices[i];
		}
		back[i] = max(max_profit, back[i + 1]);
		if (prices[i] > max_prices) {
			max_prices = prices[i];
		}
	}

	int ans = back[0];
	for (int i = 1; i != n; ++i) {
		if (front[i - 1] + back[i] > ans) {
			ans = front[i - 1] + back[i];
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

