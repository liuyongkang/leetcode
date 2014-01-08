// =====================================================================================
// 
//       Filename:  palindrome_number.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 14时41分32秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"


bool isPalindrome(int x)
{
	if (x < 0) {
		return false;
	}

	vector<int> digits;

	while (x) {
		digits.push_back(x % 10);
		x /= 10;
	}

	int n = digits.size();
	for (int i = 0; i != n / 2; ++i) {
		if (digits[i] != digits[n - i - 1]) {
			return false;
		}
	}

	return true;
}

int main(int argc, char *argv[])
{
	cout << isPalindrome(123454321) << endl;

	return 0;
}

