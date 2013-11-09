// =====================================================================================
// 
//       Filename:  string_to_integer.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 13时58分26秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 也是模拟，不过有很多地方需要注意
 */

#include "leetcode.h"

int atoi(const char *str)
{
	int ans = 0;
	int sign = 1;

	while (isspace(*str)) {
		++str;
	}

	if (isdigit(*str) || *str == '+') {
		if (*str == '+') {
			++str;
		}

		for (int i = 0; i != 9; ++i) {
			if (isdigit(*str)) {
				ans = ans * 10 - '0' + *str;
			} else {
				return ans;
			}
			++str;
		}

		if (isdigit(*str)) {
			if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && *str - '0' > (INT_MAX % 10))) {
				return INT_MAX;
			} else {
				ans = ans * 10 - '0' + *str;
				++str;
			}
			if (isdigit(*str)) {
				return INT_MAX;
			}
		}
	} else if (*str == '-') {
		++str;
		for (int i = 0; i != 9; ++i) {
			if (isdigit(*str)) {
				ans = ans * 10 - '0' + *str;
			} else {
				return ans * -1;
			}
			++str;
		}

		ans *= -1;
		if (isdigit(*str)) {
			if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && *str > '8')) {
				return INT_MIN;
			} else {
				ans = ans * 10 + '0' - *str;
				++str;
			}
			if (isdigit(*str)) {
				return INT_MIN;
			}
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{
	cout << atoi("-2147483647") << endl;

	return 0;
}

