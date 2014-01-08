// =====================================================================================
// 
//       Filename:  remove_element.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月19日 07时46分41秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 很简单的模拟
 */

#include "leetcode.h"

int removeElement(int A[], int n, int elem)
{
	int cur = 0, ans = 0;
	
	for (; cur != n; ++cur) {
		if (A[cur] != elem) {
			A[ans++] = A[cur];
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

