// =====================================================================================
// 
//       Filename:  strstr.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月20日 20时39分48秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 就用一个简单实现吧
 */

#include "leetcode.h"

char *strStr(char *haystack, char *needle)
{
	int s_len = strlen(haystack), d_len = strlen(needle);
	
	if (d_len == 0) {
		return haystack;
	}

	if (s_len < d_len) {
		return NULL;
	}

	while (*haystack) {
		if (strncmp(haystack, needle, d_len) == 0) {
			return haystack;
		}
		++haystack;
	}

	return NULL;
}

int main(int argc, char *argv[])
{


	return 0;
}

