// =====================================================================================
// 
//       Filename:  098_validate_binary_search_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 10时46分50秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 中序遍历，再判断
 */

#include "leetcode.h"
#include "tree.h"

void traversal(TreeNode *root, vector<int> &values)
{
	if (!root) {
		return;
	}

	traversal(root->left, values);
	values.push_back(root->val);
	traversal(root->right, values);
}

bool isValidBST(TreeNode *root)
{
	vector<int> values;

	traversal(root, values);

	return is_sorted(values.begin(), values.end(), less_equal<int>());
}


int main(int argc, char *argv[])
{


	return 0;
}

