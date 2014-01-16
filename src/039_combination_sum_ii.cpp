// =====================================================================================
// 
//       Filename:  039_combination_sum_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月14日 10时34分02秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * dfs
 */

#include "leetcode.h"

void search(vector<int> &num, int target, int n, vector<int> &cur, set<vector<int>> &ans)
{
	if (target == 0) {
		ans.insert(cur);
		return;
	}

	if (n == num.size() || target < num[n]) {
		return;
	}

	search(num, target, n + 1, cur, ans);
	if (target >= num[n]) {
		cur.push_back(num[n]);
		search(num, target - num[n], n + 1, cur, ans);
		cur.pop_back();
	} 
}

vector<vector<int>> combinationSum2(vector<int> &num, int target)
{
	set<vector<int>> temp;
	vector<int> cur;

	sort(num.begin(), num.end());
	search(num, target, 0, cur, temp);

	vector<vector<int>> ans;
	for (auto iter = temp.begin(); iter != temp.end(); ++iter) {
		ans.push_back(*iter);
	}
	return ans;
}

int main(int argc, char *argv[])
{
	vector<int> num = {1, 1};
	combinationSum2(num, 2);


	return 0;
}

