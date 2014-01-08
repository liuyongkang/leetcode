// =====================================================================================
// 
//       Filename:  reverse_integer.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 13时49分42秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 很简单的模拟题
 */

#include "leetcode.h"

int reverse(int x)
{
	int ans = 0;
	int sign = 1;

	if (x < 0) {
		sign = -1;
	}

	x /= sign;

	while (x) {
		ans = ans * 10 + x % 10;
		x /= 10;
	} 

	ans *= sign;

	return ans;
}

int main(int argc, char *argv[])
{
	cout << reverse(-123) << endl;

	return 0;
}

