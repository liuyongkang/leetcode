// =====================================================================================
// 
//       Filename:  110_balanced_binary_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月09日 10时28分32秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"

bool balance = true;

int height(TreeNode *root)
{
	if (!balance || !root) {
		return 0;
	}

	int lh = height(root->left) + 1, rh = height(root->right) + 1;

	if (abs(lh - rh) > 1) {
		balance = false;
	}

	return max(lh, rh);
}

bool isBalanced(TreeNode *root)
{
	height(root);

	return balance;
}

int main(int argc, char *argv[])
{


	return 0;
}

