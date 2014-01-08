// =====================================================================================
// 
//       Filename:  add_two_numbers.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月07日 09时35分03秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 保留进位相加，时间复杂度O(m+n)
 */

#include "leetcode.h"
#include "list.h"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
	ListNode *new_node = new ListNode(0);
	ListNode *pre_node = new_node;

	int cur_val, carry_val = 0;

	while (l1 && l2) {
		cur_val = l1->val + l2->val + carry_val;
		l1 = l1->next;
		l2 = l2->next;
		carry_val = cur_val / 10;
		cur_val %= 10;
		pre_node->next = new ListNode(cur_val);
		pre_node = pre_node->next;
	}

	if (l1) {
		while (l1) {
			cur_val = l1->val + carry_val;
			l1 = l1->next;
			carry_val = cur_val / 10;
			cur_val %= 10;
			pre_node->next = new ListNode(cur_val);
			pre_node = pre_node->next;
		}
	} else if (l2) {
		while (l2) {
			cur_val = l2->val + carry_val;
			l2 = l2->next;
			carry_val = cur_val / 10;
			cur_val %= 10;
			pre_node->next = new ListNode(cur_val);
			pre_node = pre_node->next;
		}
	}

	if (carry_val) {
		pre_node->next = new ListNode(carry_val);
	}

	ListNode *del_node = new_node;
	new_node = new_node->next;
	delete del_node;

	return new_node;
}


int main(int argc, char *argv[])
{

	return 0;
}

