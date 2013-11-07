// =====================================================================================
// 
//       Filename:  list.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月07日 09时30分08秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

