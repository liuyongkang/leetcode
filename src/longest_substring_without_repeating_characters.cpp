// =====================================================================================
// 
//       Filename:  longest_substring_without_repeating_characters.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月05日 07时47分37秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"


int lengthOfLongestSubstring(string s)
{
	int n = s.size();

	if (n == 0) {
		return 0;
	}

	vector<int> pre_repeat_index(n, -1);

	for (int i = 0; i != n; ++i) {
		for (int j = i - 1; j >= 0; --j) {
			if (s[i] == s[j]) {
				pre_repeat_index[i] = j;
				break;
			}
		}
	}

	int longest = 0;
	int min_index = -1;

	for (int i = 0; i != n; ++i) {
		if (pre_repeat_index[i] > min_index) {
			min_index = pre_repeat_index[i];
		}
		if (i - min_index > longest) {
			longest = i - min_index;
		}
	}

	return longest;
}

int main(int argc, char *argv[])
{
	cout << lengthOfLongestSubstring(string("abcabcbb")) << endl;
	cout << lengthOfLongestSubstring(string("bbbbb")) << endl;

	return 0;
}

