// =====================================================================================
// 
//       Filename:  100_same_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 17时42分51秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 递归判断
 */

#include "leetcode.h"
#include "tree.h"

bool isSameTree(TreeNode *p, TreeNode *q)
{
	if (p == NULL || q == NULL) {
		return p == NULL && q == NULL;
	}

	if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q->val) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[])
{


	return 0;
}

