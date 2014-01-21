// =====================================================================================
// 
//       Filename:  114_flatten_binary_tree_to_linked_list.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月19日 17时42分02秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 递归将左子树放到跟节点和右子树之间
 */

#include "leetcode.h"
#include "tree.h"

TreeNode *flat(TreeNode *root)
{
	if (!root->left || !root->right) {
		if (!root->left && !root->right) {
			return root;
		}
		if (!root->right) {
			root->right = root->left;
			root->left = NULL;
		}
		return flat(root->right);
	}

	TreeNode *left_last = flat(root->left);
	left_last->right = root->right;
	root->right = root->left;
	root->left = NULL;
	return flat(left_last->right);
}

void flatten(TreeNode *root)
{
	if (!root) {
		return;
	}

	flat(root);
}

int main(int argc, char *argv[])
{


	return 0;
}

