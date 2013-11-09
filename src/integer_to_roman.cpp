// =====================================================================================
// 
//       Filename:  integer_to_roman.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 20时54分33秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 很巧妙的构造一张表
 */

#include "leetcode.h"

string intToRoman(int num)
{
	string romans[4][10] = {
		{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"}, 
		{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
		{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
		{"", "M", "MM", "MMM"}
	};

	string ans;
	int i = 0;
	while (num) {
		ans = romans[i][num % 10] + ans;
		num /= 10;
		++i;
	}
	
	return ans;
}

int main(int argc, char *argv[])
{
	cout << intToRoman(1899) << endl;

	return 0;
}

