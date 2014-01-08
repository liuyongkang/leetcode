// =====================================================================================
// 
//       Filename:  zigzag_conversion.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月08日 07时37分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 找出规律，O(n)解
 */

#include "leetcode.h"

string convert(string s, int nRows)
{
	int n = s.size();
	int unit = 2 * nRows - 2;
	string ans(s);
	
	
	if (n <= 1 || nRows == 1) {
		return ans;
	}

	int unit_num = n / unit;
	int last_pos = n % unit;
	vector<int> line_num(nRows);
	
	line_num[0] = unit_num + (last_pos > 0);
	for (int i = 1; i != nRows - 1; ++i) {
		line_num[i] = 2 * unit_num + (last_pos > i) + (last_pos > 2 * nRows - 2 - i);
		line_num[i] += line_num[i - 1];
	}
	
	
	for (int i = 0; i != unit_num; ++i) {
		ans[i] = s[i * unit];
		for (int j = 0; j != nRows - 2; ++j) {
			ans[line_num[j] + 2 * i] = s[i * unit + j + 1];
		}
		ans[line_num[nRows - 2] + i] = s[i * unit + nRows - 1];
		for (int j = 0; j != nRows - 2; ++j) {
			ans[line_num[j] + 2 * i + 1] = s[i * unit + 2 * nRows - 2 - j - 1];
		}
	}

	if (last_pos != 0) {
		ans[unit_num] = s[unit_num * unit];
	} else {
		return ans;
	}
	
	if (last_pos > nRows - 1) {
		for (int j = 0; j != nRows - 2; ++j) {
			ans[line_num[j] + 2 * unit_num] = s[unit_num * unit + j + 1];
		}
	} else {
		for (int j = 0; j != last_pos - 1; ++j) {
			ans[line_num[j] + 2 * unit_num] = s[unit_num * unit + j + 1];
		}
		return ans;
	}
	
	if (last_pos != nRows - 1) {
		ans[line_num[nRows - 2] + unit_num] = s[unit_num * unit + nRows - 1]; 
	} else {
		return ans;
	}
	
	for (int j = 2 * nRows - 2 - last_pos; j != nRows - 2; ++j) {
		ans[line_num[j] + 2 * unit_num + 1] = s[unit_num * unit + 2 * nRows - 2 - j - 1];
	}

	return ans;
}

int main(int argc, char *argv[])
{
	cout << convert(string("PAYPALISHIRING"), 3) << endl;

	return 0;
}

