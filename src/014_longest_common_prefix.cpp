// =====================================================================================
// 
//       Filename:  longest_common_prefix.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月10日 12时25分46秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 题目虽为LCP，但并不是真正的LCP，只是简单的模拟
 */

#include "leetcode.h"

string longestCommonPrefix(vector<string> &strs)
{
	int n = strs.size();

	if (n == 0) {
		return string();
	}

	for (int i = 0; i != strs[0].size(); ++i) {
		for (int j = 1; j != n; ++j) {
			if (strs[0][i] != strs[j][i]) {
				return strs[0].substr(0, i);
			}
		}
	}

	return strs[0];
}

int main(int argc, char *argv[])
{


	return 0;
}

