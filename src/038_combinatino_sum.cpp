// =====================================================================================
// 
//       Filename:  038_combinatino_sum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月14日 10时16分23秒
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

void search(vector<int> &candidates, int target, int n, vector<int> &cur, vector<vector<int>> &ans)
{
	if (target == 0) {
		ans.push_back(cur);
		return;
	}

	if (n == candidates.size() || target < candidates[n]) {
		return;
	}

	for (int i = 0; i <= target / candidates[n]; ++i) {
		cur.push_back(candidates[n]);
	}

	for (int i = 0; i <= target / candidates[n]; ++i) {
		cur.pop_back();
		search(candidates, target - (target / candidates[n] - i) * candidates[n], n + 1, cur, ans);
	}
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
	vector<vector<int>> ans;
	vector<int> cur;
	
	sort(candidates.begin(), candidates.end());
	auto iter = unique(candidates.begin(), candidates.end());
	candidates.erase(iter, candidates.end());

	search(candidates, target, 0, cur, ans);

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

