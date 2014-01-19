// =====================================================================================
// 
//       Filename:  104_maximum_depth_of_binary_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 20时09分41秒
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

int maxDepth(TreeNode *root)
{
	if (!root) {
		return 0;
	}

	int l = maxDepth(root->left), r = maxDepth(root->right);
	
	return max(l, r) + 1;
}

int main(int argc, char *argv[])
{


	return 0;
}

