// =====================================================================================
// 
//       Filename:  117_populating_next_right_pointers_in_each_node_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月12日 14时24分46秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "tree.h"

void connect(TreeLinkNode *root)
{
	if (!root) {
		return;
	}

	if (root->left) {
		if (root->right) {
			root->left->next = root->right;
		} else {
			TreeLinkNode *p = root->next;

			while (p) {
				if (p->left || p->right) {
					break;
				}
				p = p->next;
			}
			if (!p) {
				root->left->next = NULL;
			} else if (p->left) {
				root->left->next = p->left;
			} else {
				root->left->next = p->right;
			}
		}
	}

	if (root->right) {
		TreeLinkNode *p = root->next;

		while (p) {
			if (p->left || p->right) {
				break;
			}
			p = p->next;
		}
		if (!p) {
			root->right->next = NULL;
		} else if (p->left) {
			root->right->next = p->left;
		} else {
			root->right->next = p->right;
		}
	}

	connect(root->right);
	connect(root->left);
}

int main(int argc, char *argv[])
{


	return 0;
}

