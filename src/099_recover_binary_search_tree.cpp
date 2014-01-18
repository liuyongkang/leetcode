// =====================================================================================
// 
//       Filename:  099_recover_binary_search_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 17时02分24秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 分别找出两个位置不对的节点，交换
 * 写的有点乱。。。
 */

#include "leetcode.h"
#include "tree.h"

int *pre, *nxt;

bool searchFirst(TreeNode *root)
{
	if (!root) {
		return false;
	}

	if (searchFirst(root->left)) {
		return true;
	}
	if (pre) {
		if (*pre < root->val) {
			pre = &(root->val);
		} else {
			return true;
		}
	} else {
		pre = &(root->val);
	}
	if (searchFirst(root->right)) {
		return true;
	}

	return false;
}

bool searchSecond(TreeNode *root)
{
	if (!root) {
		return false;
	}

	if (searchSecond(root->right)) {
		return true;
	}
	if (nxt) {
		if (*nxt > root->val) {
			nxt = &(root->val);
		} else {
			return true;
		}
	} else {
		nxt = &(root->val);
	}
	if (searchSecond(root->left)) {
		return true;
	}

	return false;
}


void recoverTree(TreeNode *root)
{
	pre = NULL;
	nxt = NULL;

	searchFirst(root);

	searchSecond(root);

	int t = *pre;
	*pre = *nxt;
	*nxt = t;
}

int main(int argc, char *argv[])
{
	TreeNode a(1), b(2), c(3);

	a.left = NULL;
	a.right = &b;
	b.left = &c;
	b.right = NULL;
	c.left = NULL;
	c.right = NULL;

	recoverTree(&a);

	return 0;
}

