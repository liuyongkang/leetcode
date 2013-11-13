// =====================================================================================
// 
//       Filename:  remove_nth_node_from_end_of_list.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月13日 20时38分58秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 先让两个指针隔开n的距离，然后在遍历
 */

#include "leetcode.h"
#include "list.h"

ListNode *removeNthFromEnd(ListNode *head, int n) {
	ListNode h(0);
	h.next = head;
	ListNode *p = head, *r = &h, *remove;

	for (int i = 0; i != n; ++i) {
		p = p->next;
	}
	
	while (p) {
		p = p->next;
		r = r->next;
	}

	remove = r->next;
	r->next = remove->next;

	return h.next;
}

int main(int argc, char *argv[])
{
	ListNode head(0);
	ListNode *h = &head;
	removeNthFromEnd(h, 1);

	return 0;
}

