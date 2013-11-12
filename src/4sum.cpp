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
 * 与前两题类似
 */

#include "leetcode.h"

vector<vector<int> > fourSum(vector<int> &num, int target)
{
	vector<vector<int> > all_ans;
	int n = num.size();

	if (n < 4) {
		return all_ans;
	}

	sort(num.begin(), num.end());

	int one_prev_num = num[0] - 1;
	for (int i = 0; i != n - 3; ++i) {
		int one_num = num[i];
		if (one_num == one_prev_num) {
			continue;
		} else {
			one_prev_num = one_num;
		}

		int ano_prev_num = num[i] - 1;
		for (int j = i + 1; j != n - 2; ++j) {
			int ano_num = num[j];
			if (ano_num == ano_prev_num) {
				continue;
			} else {
				ano_prev_num = ano_num;
			}
			
			int f = j + 1, b = n - 1;
			while (f < b) {
				if (num[f] + num[b] + one_num + ano_num == target) {
					vector<int> cur_ans;
					cur_ans.push_back(one_num);
					cur_ans.push_back(ano_num);
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
				} else if (num[f] + num[b] + one_num + ano_num < target) {
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
	}

	return all_ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

