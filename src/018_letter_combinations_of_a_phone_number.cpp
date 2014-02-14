// =====================================================================================
// 
//       Filename:  letter_combinations_of_a_phone_number.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月13日 07时34分49秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"

map<char, string> digit_to_letter;

void dfs(string &digits, int cur_digit, int n, string cur_str, vector<string> &ans)
{
	if (cur_digit == n) {
		ans.push_back(cur_str);
		return;
	}
	
	for (int i = 0; i != digit_to_letter[digits[cur_digit]].size(); ++i) {
		dfs(digits, cur_digit + 1, n, cur_str + digit_to_letter[digits[cur_digit]].substr(i, 1), ans);
	}
}

vector<string> letterCombinations(string digits)
{
	vector<string> ans;
	int n = digits.size();

	if (n == 0) {
		ans.push_back(string());
		return ans;
	}
	digit_to_letter.insert(make_pair('2', string("abc")));
	digit_to_letter.insert(make_pair('3', string("def")));
	digit_to_letter.insert(make_pair('4', string("ghi")));
	digit_to_letter.insert(make_pair('5', string("jkl")));
	digit_to_letter.insert(make_pair('6', string("mno")));
	digit_to_letter.insert(make_pair('7', string("pqrs")));
	digit_to_letter.insert(make_pair('8', string("tuv")));
	digit_to_letter.insert(make_pair('9', string("wxyz")));

	dfs(digits, 0, n, string(), ans);
	
	return ans;
}



int main(int argc, char *argv[])
{


	return 0;
}

