// =====================================================================================
// 
//       Filename:  roman_to_integer.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 21时07分20秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"

int romanToInteger(string s)
{
	string romans[4][10] = {
		{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}, 
		{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
		{"", "M", "MM", "MMM", "--", "-", "--", "---", "----", "--"}
	};

	int ans = 0;
	int cur_digit;
	int i;

	if (s[0] == 'I' || s[0] == 'V') {
		i = 0;
	} else if (s[0] == 'X' || s[0] == 'L') {
		i = 1;
	} else if (s[0] == 'C' || s[0] == 'D') {
		i = 2;
	} else {
		i = 3;
	}

	while (i != -1) {
		for (int j = 0; j != 10; ++j) {
			if (s.substr(0, romans[i][j].size()) == romans[i][j]) {
				cur_digit = j;
			}
		}
		s = s.substr(romans[i][cur_digit].size(), s.size() - romans[i][cur_digit].size());
		ans = ans * 10 + cur_digit;
		--i;
	}
	
	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

