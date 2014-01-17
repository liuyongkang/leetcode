// =====================================================================================
// 
//       Filename:  057_length_of_last_word.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 16时00分41秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 找到space就记录，很容易就能得出结果
 */

#include "leetcode.h"

int lengthOfLastWord(const char *s)
{
	const char *space;
	int ans = 0;

	while (*s == ' ') {
		++s;
	}
	space = s;

	while (*s) {
		++s;
		if (*s == ' ') {
			ans = s - space;
			while (*s == ' ') {
				++s;
			}
			if (!*s) {
				return ans;
			} else {
				space = s;
			}
		}
	}
	
	return s - space;
}

int main(int argc, char *argv[])
{


	return 0;
}

