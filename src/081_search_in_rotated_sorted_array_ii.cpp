// =====================================================================================
// 
//       Filename:  080_search_in_rotated_sorted_array_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月10日 12时50分36秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"

bool find(int A[], int b, int e, int target)
{
	if (b >= e) {
		return false;
	}

	int m = (b + e) / 2;

	if (A[m] == target) {
		return true;
	}

	if (A[b] < A[e - 1]) {
		if (A[m] < target) {
			return find(A, m + 1, e, target);
		} else {
			return find(A, b, m, target);
		}
	} else {
		return find(A, b, m, target) || find(A, m + 1, e, target);
	}
}

bool search(int A[], int n, int target)
{
	return find(A, 0, n, target);
}

int main(int argc, char *argv[])
{


	return 0;
}

