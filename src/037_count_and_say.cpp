// =====================================================================================
// 
//       Filename:  037_count_and_say.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月13日 20时10分40秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 模拟
 */

#include "leetcode.h"

string countAndSay(int n)
{
	string cur("1"), next;

	for (int i = 1; i != n; ++i) {
		int k = 0;
		for (int j = 0; j != cur.size(); ++j) {
			if (cur[j] != cur[k]) {
				next += j - k + '0';
				next += cur[k];
				k = j;
			}
		}
		next += cur.size() - k + '0';
		next += cur[k];

		cur = next;
		next.clear();
	}
	
	return cur;
}

int main(int argc, char *argv[])
{
	countAndSay(5);


	return 0;
}

