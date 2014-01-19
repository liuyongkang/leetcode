// =====================================================================================
// 
//       Filename:  111_minimum_depth_of_binary_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月19日 09时03分01秒
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

int depth(TreeNode *root)
{
	if (!root->left && !root->right) {
		return 1;
	}

	if (!root->left) {
		return depth(root->right) + 1;
	}

	if (!root->right) {
		return depth(root->left) + 1;
	}

	int l = depth(root->left), r = depth(root->right);

	return min(l, r) + 1;
}

int minDepth(TreeNode *root)
{
	if (!root) {
		return 0;
	}

	return depth(root);
}

int main(int argc, char *argv[])
{


	return 0;
}

