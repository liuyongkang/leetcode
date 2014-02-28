// =====================================================================================
// 
//       Filename:  105_construct_binary_tree_from_preorder_and_inorder_traversal.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月14日 10时54分03秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"

TreeNode *build(vector<int> &preorder, int pb, vector<int> &inorder, int ib, int n)
{
	if (n == 0) {
		return NULL;
	}

	if (n == 1) {
		return new TreeNode(preorder[pb]);
	}

	for (int i = 0; ; ++i) {
		if (preorder[pb] == inorder[ib + i]) {
			TreeNode *root = new TreeNode(preorder[pb]);
			root->left = build(preorder, pb + 1, inorder, ib, i);
			root->right = build(preorder, pb + i + 1, inorder, ib + i + 1, n - i - 1);
			return root;
		}
	}
}

TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
	return build(preorder, 0, inorder, 0, preorder.size());
}

int main(int argc, char *argv[])
{


	return 0;
}

