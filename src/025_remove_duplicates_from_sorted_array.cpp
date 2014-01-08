// =====================================================================================
// 
//       Filename:  remove_duplicates_from_sorted_array.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月16日 16时57分45秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 比较相邻的元素就可以了
 */

#include "leetcode.h"

int removeDuplicates(int A[], int n)
{
	int m = 1;

	if (n == 0) {
		return 0;
	}

	for (int i = 1; i != n; ++i) {
		if (A[i - 1] != A[i]) {
			A[m++] = A[i];
		}
	}

	return m;
}

int main(int argc, char *argv[])
{


	return 0;
}

