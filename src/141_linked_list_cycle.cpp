// =====================================================================================
// 
//       Filename:  141_linked_list_cycle.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月22日 20时31分00秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 前后两个指针进行判断
 */

#include "leetcode.h"
#include "list.h"

bool hasCycle(ListNode *head)
{
	if (!head) {
		return false;
	}

	ListNode *p = head->next, *q = head;

	while (p && p->next) {
		if (p == q) {
			return true;
		}
		p = p->next->next;
		q = q->next;
	}

	return false;
}

int main(int argc, char *argv[])
{


	return 0;
}

