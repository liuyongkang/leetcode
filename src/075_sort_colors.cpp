// =====================================================================================
// 
//       Filename:  075_sort_colors.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 09时48分13秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 水题
 */

#include "leetcode.h"

void sortColors(int A[], int n)
{
	int f = 0, l = n - 1;

	int i = 0;
	while (i <= l) {
		if (A[i] == 0) {
			if (i == f) {
				++i;
			} else {
				swap(A[f], A[i]);
			}
			++f;
		} else if (A[i] == 1) {
			++i;
		} else {
			swap(A[i], A[l]);
			--l;
		}
	}
}

int main(int argc, char *argv[])
{
	int A[] = {0};
	sortColors(A, 1);


	return 0;
}

