// =====================================================================================
// 
//       Filename:  029_substring_with_concatenation_of_all_words.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月08日 16时52分20秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 枚举S中固定长度的子串，判断是否符合要求
 */

#include "leetcode.h"

vector<int> findSubstring(string S, vector<string> &L)
{
	unordered_map<string, int> dict;
	unordered_map<string, int> cur_dict;

	for (auto &t : L) {
		++dict[t];
	}

	int word_size = L[0].size();
	int dict_size = L.size();
	int s_size = S.size();
	vector<int> ans;

	for (int i = 0; i <= s_size - dict_size * word_size; ++i) {
		cur_dict.clear();
		bool flag = true;
		for (int j = 0; j != dict_size; ++j) {
			string cur_str = S.substr(i + j * word_size, word_size);
			
			auto iter = dict.find(cur_str);
			if (iter == dict.end()) {
				flag = false;
				break;
			}

			if (++cur_dict[cur_str] > dict[cur_str]) {
				flag = false;
				break;
			}
		}

		if (flag) {
			ans.push_back(i);
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{
	string S("a");
	vector<string> L = {"a"};

	findSubstring(S, L);

	return 0;
}

