// =====================================================================================
// 
//       Filename:  101_symmetric_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 17时47分53秒
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

bool isSymmetricTree(TreeNode *p, TreeNode *q)
{
	if (p == NULL || q == NULL) {
		return p == NULL && q == NULL;
	}

	if (isSymmetricTree(p->left, q->right) && isSymmetricTree(p->right, q->left) && p->val == q->val) {
		return true;
	} else {
		return false;
	}
}

bool isSymmetric(TreeNode *root)
{
	if (!root) {
		return true;
	}

	return isSymmetricTree(root->left, root->right);
}

int main(int argc, char *argv[])
{


	return 0;
}

