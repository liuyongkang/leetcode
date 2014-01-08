// =====================================================================================
// 
//       Filename:  swap_nodes_in_pairs.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月16日 16时14分10秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 简单的模拟
 */

#include "leetcode.h"
#include "list.h"

ListNode *swapPairs(ListNode *head)
{
	ListNode head_node(0);
	head_node.next = head;
	
	ListNode *p = &head_node, *q;

	while (p->next && p->next->next) {
		q = p->next->next;
		p->next->next = q->next;
		q->next = p->next;
		p->next = q;
		p = q->next;
	}

	return head_node.next;
}

int main(int argc, char *argv[])
{


	return 0;
}

