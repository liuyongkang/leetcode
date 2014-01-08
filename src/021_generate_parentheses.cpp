// =====================================================================================
// 
//       Filename:  generate_parentheses.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月15日 13时53分52秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 递归解
 */

#include "leetcode.h"

void generateAns(int left, int right, int n, string cur_ans, vector<string> &ans)
{
	if (left > n || right > left) {
		return;
	}
	if (left + right == 2 * n) {
		ans.push_back(cur_ans);
	}

	generateAns(left + 1, right, n, string(cur_ans + "("), ans);
	generateAns(left, right + 1, n, string(cur_ans + ")"), ans);
}

vector<string> generateParentheses(int n)
{
	vector<string> ans;

	generateAns(0, 0, n, string(), ans);

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

