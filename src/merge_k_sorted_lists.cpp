// =====================================================================================
// 
//       Filename:  merge_k_sorted_lists.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月16日 15时02分06秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 虽然用了归并，但是实际情况并不好
 */

#include "leetcode.h"
#include "list.h"

void mergeList(vector<ListNode *> &lists, int b, int e)
{
	if (e - b > 2) {
		mergeList(lists, b, (b + e) / 2);
		mergeList(lists, (b + e) / 2, e);
	}

	if (e - b == 1) {
		return;
	} 

	int m = (b + e) / 2;
	if (lists[b] && lists[m]) {
		ListNode head(0);
		ListNode *h = &head, *p1 = lists[b], *p2 = lists[m];
		while (p1 && p2) {
			if (p1->val < p2->val) {
				h->next = p1;
				h = h->next;
				p1 = p1->next;
			} else {
				h->next = p2;
				h = h->next;
				p2 = p2->next;
			}
		}
		if (p1) {
			h->next = p1;
		} else {
			h->next = p2;
		}
		lists[b] = head.next;
	} else {
		if (lists[m]) {
			lists[b] = lists[m];
		}
	}
	return;
}

ListNode *mergeKLists(vector<ListNode *> &lists)
{
	int n = lists.size();

	if (n == 0) {
		return NULL;
	}

	mergeList(lists, 0, n);

	return lists[0];
}

int main(int argc, char *argv[])
{


	return 0;
}

