// =====================================================================================
// 
//       Filename:  112_path_sum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月19日 09时07分26秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 递归解
 */

#include "leetcode.h"
#include "tree.h"

bool path(TreeNode *root, int sum)
{
	if (!root->left or !root->right) {
		if (!root->left and !root->right) {
			return root->val == sum;
		}
		if (!root->left) {
			return path(root->right, sum - root->val);
		}
		if (!root->right) {
			return path(root->left, sum - root->val);
		}
	}

	if (path(root->left, sum - root->val) or path(root->right, sum - root->val)) {
		return true;
	}

	return false;
}

bool hasPathSum(TreeNode *root, int sum)
{
	if (!root) {
		return false;
	}

	return path(root, sum);
}

int main(int argc, char *argv[])
{


	return 0;
}

