// =====================================================================================
// 
//       Filename:  049_pow(x,n).cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 11时02分32秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 二分，注意负数
 */


#include "leetcode.h"

double pow(double x, int n)
{
	if (n == -1) {
		return 1 / x;
	}

	if (n == 0) {
		return 1;
	}

	if (n == 1) {
		return x;
	}

	double t = pow(x, n / 2);
	if (n % 2) {
		return t * t * (n > 0 ? x : 1 / x);
	} else {
		return t * t;
	}
}

int main(int argc, char *argv[])
{


	return 0;
}

