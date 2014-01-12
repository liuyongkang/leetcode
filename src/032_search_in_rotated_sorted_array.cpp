// =====================================================================================
// 
//       Filename:  032_search_in_rotated_sorted_array.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月12日 09时40分46秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 对二分查找进行一些修改，时间复杂度不变
 */

#include "leetcode.h"

int search(int A[], int n, int target)
{
	int b = 0, e = n;
	int m;

	while (b < e - 1) {
		m = (b + e) / 2;
		if (A[m - 1] >= A[b] && A[m - 1] >= A[e - 1]) {
			if (target >= A[b] && target <= A[m - 1]) {
				e = m;
			} else if ((target >= A[m] && target >= A[e - 1]) ||
					(target <= A[m] && target <= A[e - 1]) || 
					(target >= A[m] && target <= A[e - 1])) {
				b = m;
			} else {
				return -1;
			}
		} else if (A[m - 1] <= A[b] && A[m - 1] <= A[e - 1]) {
			if (target >= A[m] && target <= A[e - 1]) {
				b = m;
			} else if ((target >= A[b] && target >= A[m - 1]) ||
					(target <= A[b] && target <= A[m - 1]) ||
					(target >= A[b] && target <= A[m - 1])) {
				e = m;
			} else {
				return -1;
			}
		} else {
			if (target <= A[m - 1]) {
				e = m;
			} else {
				b = m;
			}
		}
	}

	return (A[b] == target) ? b : -1;
}

int main(int argc, char *argv[])
{

	return 0;
}

