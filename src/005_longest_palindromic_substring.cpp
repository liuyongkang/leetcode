// =====================================================================================
// 
//       Filename:  longest_palindromic_substring.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月07日 12时44分53秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * manacher算法，O(n)时间复杂度
 */


#include "leetcode.h"

string longestPalindrome(string s)
{
	int n = s.size();
	string tran_s;

	if (n == 0) {
		return string();
	}

	tran_s.resize(2 * n + 3);
	tran_s[0] = '@';
	tran_s[1] = '#';
	tran_s[2] = s[0];
	for (int i = 1; i != n; ++i) {
		tran_s[i * 2 + 1] = '#';
		tran_s[i * 2 + 2] = s[i];
	}
	tran_s[2 * n + 1] = '#';
	tran_s[2 * n + 2] = '#';

	vector<int> palin_num(2 * n + 3, 0);
	int mid = 0, m = 0;

	for (int i = 2; i != 2 * n + 1; ++i) {
		if (i < m) {
			palin_num[i] = min(palin_num[2 * mid - i], m - i);
		} else {
			palin_num[i] = 0;
		}

		while (tran_s[i - palin_num[i] - 1] == tran_s[i + palin_num[i] + 1]) {
			++palin_num[i];
		}

		if (i + palin_num[i] > m) {
			m = i + palin_num[i];
			mid = i;
		}
	}

	int max_index = 0;
	for (int i = 2; i != 2 * n + 1; ++i) {
		if (palin_num[i] > palin_num[max_index]) {
			max_index = i;
		}
	}

	return s.substr((max_index - 1 - palin_num[max_index]) / 2, palin_num[max_index]);
}

int main(int argc, char *argv[])
{
	cout << longestPalindrome(string("ccd")) << endl;

	return 0;
}

