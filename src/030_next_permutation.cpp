// =====================================================================================
// 
//       Filename:  030_next_permutation.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月09日 09时18分19秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 参照STL中next_permutation的实现
 */

#include "leetcode.h"

void nextPermutation(vector<int> &num)
{
	if (num.size() < 2) {
		return;
	}

	auto i = num.end();
	auto ii = i;

	--i;

	while (1) {
		ii = i--;
		if (*i < *ii) {
			auto j = num.end();

			while (*i >= *(--j));

			iter_swap(i, j);
			reverse(ii, num.end());
			break;
		}

		if (i == num.begin()) {
			reverse(num.begin(), num.end());
			break;
		}
	}
}

int main(int argc, char *argv[])
{
	vector<int> num = {1, 2};
	nextPermutation(num);

	return 0;
}

