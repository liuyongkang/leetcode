// =====================================================================================
// 
//       Filename:  109_convert_sorted_list_to_binary_search_tree.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月12日 16时50分51秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"
#include "list.h"

TreeNode *construct(ListNode *&p, int b, int e)
{
	if (b == e) {
		return NULL;
	}

	if (b == e - 1) {
		TreeNode *t = new TreeNode(p->val);
		p = p->next;
		return t;
	}

	int mid = (b + e) / 2;
	TreeNode *l = construct(p, b, mid);
	TreeNode *root = new TreeNode(p->val);
	p = p->next;
	root->left = l;
	root->right = construct(p, mid + 1, e);

	return root;
}

TreeNode *sortedListToBST(ListNode *head)
{
	ListNode *p = head;
	int n = 0;

	while (p) {
		p = p->next;
		++n;
	}

	return construct(head, 0, n);
}

int main(int argc, char *argv[])
{


	return 0;
}

