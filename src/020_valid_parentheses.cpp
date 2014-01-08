// =====================================================================================
// 
//       Filename:  valid_parentheses.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月14日 07时45分19秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"

bool isValid(string s)
{
	stack<char> sc;
	int n = s.size();

	for (int i = 0; i != n; ++i) {
		if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
			sc.push(s[i]);
		} else if (s[i] == ')') {
			if (sc.empty() || sc.top() != '(') {
				return false;
			}
			sc.pop();
		} else if (s[i] == '}') {
			if (sc.empty() || sc.top() != '{') {
				return false;
			}
			sc.pop();
		} else if (s[i] == ']') {
			if (sc.empty() || sc.top() != '[') {
				return false;
			}
			sc.pop();
		} else {
			return false;
		}
	}
	
	return sc.empty();
}

int main(int argc, char *argv[])
{

	return 0;
}

