// =====================================================================================
// 
//       Filename:  124_binary_tree_maximum_path_sum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月11日 10时26分59秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"

int ans = INT_MIN;

int maxSum(TreeNode *root)
{
	if (!root) {
		return 0;
	}

	int l = maxSum(root->left), r = maxSum(root->right);

	int cur_max = (l > 0 ? l : 0) + (r > 0 ? r : 0) + root->val;
	if (cur_max > ans) {
		ans = cur_max;
	}
	
	return max(max(l, r) + root->val, 0);
}

int maxPathSum(TreeNode *root)
{
	if (!root) {
		return 0;
	}

	maxSum(root);

	return ans;
}


int main(int argc, char *argv[])
{
	TreeNode t1(1), t2(2), t3(3);

	t1.left = &t2;
	t1.right = &t3;

	maxPathSum(&t1);


	return 0;
}

