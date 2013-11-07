// =====================================================================================
// 
//       Filename:  median_of_two_sorted_arrays.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月04日 13时22分09秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 两个序列中的折半查找，找到在所求值之前的序列则直接丢弃，继续查找，时间复杂度O(log(m+n))
 */

#include "leetcode.h"

int find_kth(int a[], int m, int b[], int n, int k)
{
	if (m > n) {
		return find_kth(b, n, a, m, k);
	}
	if (m == 0) {
		return b[k - 1];
	}
	if (k == 1) {
		return min(a[0], b[0]);
	}

	int cut_a = min(m, k / 2);
	int cut_b = k - cut_a;

	if (a[cut_a - 1] > b[cut_b - 1]) {
		find_kth(a, m, b + cut_b, n - cut_b, k - cut_b);
	} else if (a[cut_a - 1] < b[cut_b - 1]) {
		find_kth(a + cut_a, m - cut_a, b, n, k - cut_a);
	} else {
		return a[cut_a - 1];
	}
}

double findMedianSortedArrays(int A[], int m, int B[], int n)
{
	int s = m + n;

	if (s & 1) {
		return find_kth(A, m, B, n, s / 2 + 1);
	} else {
		return (find_kth(A, m, B, n, s / 2) + find_kth(A, m, B, n, s / 2 + 1)) / 2.0;
	}
}

int main(int argc, char *argv[])
{
	int A[] = {1, 3, 5, 7, 9};
	int B[] = {3, 4, 6};

	cout << findMedianSortedArrays(A, 5, B, 3) << endl;

	return 0;
}

