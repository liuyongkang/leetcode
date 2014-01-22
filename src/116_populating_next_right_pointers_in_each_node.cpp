// =====================================================================================
// 
//       Filename:  116_populating_next_right_pointers_in_each_node.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 09时15分22秒
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

void connect(TreeLinkNode *root)
{
	if (!root) {
		return;
	}

	if (root->left) {
		root->left->next = root->right;
	}

	if (root->right && root->next) {
		root->right->next = root->next->left;
	}

	connect(root->left);
	connect(root->right);
}

int main(int argc, char *argv[])
{


	return 0;
}

