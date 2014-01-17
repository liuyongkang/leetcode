// =====================================================================================
// 
//       Filename:  094_binary_tree_inorder_traversal.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 18时17分54秒
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

void traversal(TreeNode *root, vector<int> &ans)
{
	if (root == NULL) {
		return;
	}

	traversal(root->left, ans);
	ans.push_back(root->val);
	traversal(root->right, ans);
}

vector<int> inorderTraversal(TreeNode *root)
{
	vector<int> ans;

	traversal(root, ans);

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

