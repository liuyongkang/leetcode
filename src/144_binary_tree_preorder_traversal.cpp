// =====================================================================================
// 
//       Filename:  144_binary_tree_preorder_traversal.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月22日 20时39分35秒
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
	if (!root) {
		return;
	}

	ans.push_back(root->val);
	traversal(root->left, ans);
	traversal(root->right, ans);
}

vector<int> preorderTraversal(TreeNode *root)
{
	vector<int> ans;

	traversal(root, ans);

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

