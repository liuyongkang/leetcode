// =====================================================================================
// 
//       Filename:  142_linked_list_cycle_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月10日 11时08分57秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"
#include "list.h"

ListNode *detectCycle(ListNode *head)
{
	if (!head) {
		return NULL;
	}

	ListNode *p = head, *q = head;

	while (p && p->next) {
		p = p->next->next;
		q = q->next;
		if (p == q) {
			p = head;
			while (p != q) {
				p = p->next;
				q = q->next;
			}
			return p;
		}
	}

	return NULL;
}

int main(int argc, char *argv[])
{


	return 0;
}

