// =====================================================================================
// 
//       Filename:  106_construct_binary_tree_from_inorder_and_postorder_traversal.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月14日 11时04分27秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"

TreeNode *build(vector<int> &inorder, int ie, vector<int> &postorder, int pe, int n)
{
	if (n == 0) {
		return NULL;
	}

	if (n == 1) {
		return new TreeNode(inorder[ie]);
	}

	for (int i = 0; ; ++i) {
		if (inorder[ie - i] == postorder[pe]) {
			TreeNode *root = new TreeNode(postorder[pe]);
			root->left = build(inorder, ie - i - 1, postorder, pe - i - 1, n - i - 1);
			root->right = build(inorder, ie, postorder, pe - 1, i);
			return root;
		}
	}
}

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
	return build(inorder, inorder.size() - 1, postorder, postorder.size() - 1, postorder.size());
}

int main(int argc, char *argv[])
{


	return 0;
}

