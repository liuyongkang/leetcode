// =====================================================================================
// 
//       Filename:  031_longest_valid_parentheses.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月09日 11时01分56秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 算出以每一个字符为结尾的最大长度
 */

#include "leetcode.h"

int longestValidParentheses(string s)
{
	vector<int> num(s.size(), 0);
	stack<int> si;
	int ans = 0;
	int n = s.size();

	for (int i = 0; i != n; ++i) {
		if (s[i] == '(') {
			si.push(i);
		} else {
			if (!si.empty()) {
				int forward = si.top();
				si.pop();

				num[i] = (forward ? num[forward - 1] : 0) + i - forward + 1;
				if (num[i] > ans) {
					ans = num[i];
				}
			}
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

