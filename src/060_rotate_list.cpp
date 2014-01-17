// =====================================================================================
// 
//       Filename:  060_rotate_list.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 16时29分02秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 将链表连起来，在合适的位置断开即可
 */

#include "leetcode.h"
#include "list.h"

ListNode *rotateRight(ListNode *head, int k)
{
	int len;
	ListNode *p = head, *new_head;

	if (!head || !k) {
		return head;
	}

	len = 1;
	while (p->next) {
		p = p->next;
		++len;
	}
	p->next = head;

	k = k % len;
	p = head;
	for (int i = 0; i != len - k - 1; ++i) {
		p = p->next;
	}
	new_head = p->next;
	p->next = NULL;

	return new_head;
}

int main(int argc, char *argv[])
{


	return 0;
}

