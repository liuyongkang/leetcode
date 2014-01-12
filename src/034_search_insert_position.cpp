// =====================================================================================
// 
//       Filename:  034_search_insert_position.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月12日 11时29分29秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 还是对二分查找的特定修改，时间复杂度不变
 */

#include "leetcode.h"

int searchInsert(int A[], int n, int target)
{
	int b = 0, e = n;
	int m;

	while (b < e - 1) {
		m = (b + e) / 2;
		if (target <= A[m - 1]) {
			e = m;
		} else {
			b = m;
		}
	}

	return (target > A[b]) ? b + 1 : b;
}

int main(int argc, char *argv[])
{


	return 0;
}

