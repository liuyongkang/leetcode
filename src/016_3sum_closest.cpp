// =====================================================================================
// 
//       Filename:  3sum_closest.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月11日 07时44分22秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 与上一题基本类似
 */

#include "leetcode.h"

#define DIS(a,b) ((a)>(b)?((a)-(b)):((b)-(a)))

int threeSumClosest(vector<int> &num, int target)
{
	int n = num.size();
	int ans = num[0] + num[1] + num[2];

	sort(num.begin(), num.end());

	int prev_num = num[0] - 1;
	for (int i = 0; i != n - 2; ++i) {
		int cur_num = num[i];
		if (cur_num == prev_num) {
			continue;
		} else {
			prev_num = cur_num;
		}
		
		int f = i + 1, b = n - 1;
		while (f < b) {
			int cur_sum = cur_num + num[f] + num[b];
			if (DIS(cur_sum, target) < DIS(ans, target)) {
				ans = cur_sum;
			}
			if (cur_sum < target) {
				while (num[f] == num[f + 1]) {
					++f;
				}
				++f;
			} else {
				while (num[b] == num[b - 1]) {
					--b;
				}
				--b;
			}
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{
	int a[] = {4, 0, 5, -5, 3, 3, 0, -4, -5};

	vector<int> t(a, a + sizeof(a) / sizeof(int));
	cout << threeSumClosest(t , -2) << endl;

	return 0;
}

