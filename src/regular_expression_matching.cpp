// =====================================================================================
// 
//       Filename:  regular_expression_matching.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 19时52分45秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 深搜递归版本
 */


#include "leetcode.h"

bool isMatch(const char *s, const char *p)
{
	if (!*p) {
		return *s == 0;
	}

	if (*(p + 1) != '*') {
		return (*s == *p || (*p == '.' && *s)) && isMatch(s + 1, p + 1);
	}

	while (*s == *p || (*p == '.' && *s)) {
		if (isMatch(s, p + 2)) {
			return true;
		}
		++s;
	}

	return isMatch(s, p + 2);
}

int main(int argc, char *argv[])
{
	cout << isMatch("aab", "c*a*b") << endl;

	return 0;
}

