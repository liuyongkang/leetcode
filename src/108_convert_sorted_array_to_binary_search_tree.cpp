// =====================================================================================
// 
//       Filename:  108_convert_sorted_array_to_binary_search_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月09日 09时58分37秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 递归解
 */

#include "leetcode.h"
#include "tree.h"

TreeNode *create(vector<int> &num, int b, int e)
{
	if (b >= e) {
		return NULL;
	}
	
	TreeNode *root = new TreeNode(num[(b + e) / 2]);
	root->left = create(num, b, (b + e) / 2);
	root->right = create(num, (b + e) / 2 + 1, e);
	
	return root;
}

TreeNode *sortedArrayToBST(vector<int> &num)
{
	return create(num, 0, num.size());
}


int main(int argc, char *argv[])
{


	return 0;
}

