// =====================================================================================
// 
//       Filename:  129_sum_root_to_leaf_numbers.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月10日 13时20分22秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"

int sum(int n, TreeNode *root)
{
	if (!root) {
		return 0;
	}

	if (!root->left && !root->right) {
		return n * 10 + root->val;
	}

	return sum(n * 10 + root->val, root->left) + sum(n * 10 + root->val, root->right);
}

int sumNumbers(TreeNode *root)
{
	if (!root) {
		return 0;
	}

	return sum(0, root);
}

int main(int argc, char *argv[])
{


	return 0;
}

