// =====================================================================================
// 
//       Filename:  reverse_nodes_in_k-group.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月16日 16时32分11秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 比上一题复杂一点，但还是模拟即可
 */

#include "leetcode.h"
#include "list.h"

ListNode *reverseKGroup(ListNode *head, int k)
{
	ListNode head_node(0);
	head_node.next = head;

	ListNode *h = &head_node, *n = head;

	if (k == 1) {
		return head;
	}

	while (1) {
		for (int i = 0; i != k; ++i) {
			if (n) {
				n = n->next;
			} else {
				return head_node.next;;
			}
		}

		ListNode *p = h->next->next, *front = h->next, *first = h->next;
		while (p != n) {
			h->next = p;
			p = p->next;
			h->next->next = front;
			front = h->next;
		}
		h = first;
		first->next = n;
	}
}

int main(int argc, char *argv[])
{

	return 0;
}

