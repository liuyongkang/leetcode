// =====================================================================================
// 
//       Filename:  033_search_for_a_range.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月12日 11时18分12秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 仍然是对二分查找进行修改，找出第一个和最后一个
 */

#include "leetcode.h"

vector<int> searchRange(int A[], int n, int target)
{
	int b = 0, e = n;
	int m;
	vector<int> ans;

	while (b < e - 1) {
		m = (b + e) / 2;
		if (target <= A[m - 1]) {
			e = m;
		} else {
			b = m;
		}
	}

	if (A[b] == target) {
		ans.push_back(b);
	} else {
		ans.push_back(-1);
		ans.push_back(-1);
		return ans;
	}
	
	b = 0;
	e = n;

	while (b < e - 1) {
		m = (b + e) / 2;
		if (target >= A[m]) {
			b = m;
		} else {
			e = m;
		}
	}

	ans.push_back(b);

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

