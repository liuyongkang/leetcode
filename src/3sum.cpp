// =====================================================================================
// 
//       Filename:  3sum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月10日 12时35分35秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 排序(O(n*logn))后，定一个数字(O(n))，寻找另外两个(O(n)),时间复杂度O(n^2)
 */

#include "leetcode.h"

vector<vector<int> > threeSum(vector<int> &num)
{
	vector<vector<int> > all_ans;
	int n = num.size();

	if (n < 3) {
		return all_ans;
	}

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
			if (num[f] + num[b] + cur_num == 0) {
				vector<int> cur_ans;
				cur_ans.push_back(cur_num);
				cur_ans.push_back(num[f]);
				cur_ans.push_back(num[b]);
				all_ans.push_back(cur_ans);
				while (num[f] == num[f + 1]) {
					++f;
				}
				++f;
				while (num[b] == num[b - 1]) {
					--b;
				}
				--b;
			} else if (num[f] + num[b] + cur_num < 0) {
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

	return all_ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

