// =====================================================================================
// 
//       Filename:  113_path_sum_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月19日 09时40分21秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 同样递归解
 */

#include "leetcode.h"
#include "tree.h"

void path(TreeNode *root, int sum, vector<int> &cur, vector<vector<int>> &ans)
{
	if (!root->left || !root->right) {
		if (!root->left && !root->right) {
			if (root->val == sum) {
				cur.push_back(root->val);
				ans.push_back(cur);
				cur.pop_back();
			}
			return;
		}
		if (!root->left) {
			cur.push_back(root->val);
			path(root->right, sum - root->val, cur, ans);
			cur.pop_back();
			return;
		}
		if (!root->right) {
			cur.push_back(root->val);
			path(root->left, sum - root->val, cur, ans);
			cur.pop_back();
			return;
		}
	}

	cur.push_back(root->val);
	path(root->left, sum - root->val, cur, ans);
	path(root->right, sum - root->val, cur, ans);
	cur.pop_back();
}

vector<vector<int>> pathSum(TreeNode *root, int sum)
{
	vector<vector<int>> ans;
	vector<int> cur;

	if (!root) {
		return ans;
	}

	path(root, sum, cur, ans);

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

