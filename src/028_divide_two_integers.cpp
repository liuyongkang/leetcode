// =====================================================================================
// 
//       Filename:  divide_two_integers.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月08日 12时07分39秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 分离出结果二进制表示中的每一位，把权重相加即可
 */

#include "leetcode.h"

int divide(int dividend, int divisor)
{
	long long long_dividend = dividend;
	long long long_divisor = divisor;
	long long abs_dividend = abs(long_dividend);
	long long abs_divisor = abs(long_divisor);
	bool flag = false;

	if (long_dividend * long_divisor == 0) {
		return 0;
	}

	if (long_dividend * long_divisor < 0) {
		flag = true;
	}

	long long sum;
	int weight;
	int ans = 0;

	while (abs_dividend >= abs_divisor) {
		weight = 1;
		sum = abs_divisor;
		while (sum * 2 <= abs_dividend) {
			sum *= 2;
			weight *= 2;
		}
		ans += weight;
		abs_dividend -= sum;
	}

	return flag ? -ans : ans;
}

int main(int argc, char *argv[])
{

	return 0;
}

