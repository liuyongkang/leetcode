// =====================================================================================
// 
//       Filename:  054_jump_game.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 11时48分29秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 记录下每一步能到达的最远距离即可
 */

#include "leetcode.h"

bool canJump(int A[], int n)
{
	int longest = 0;
	bool ans = true;

	for (int i = 0; i != n; ++i) {
		if (i > longest) {
			ans = false;
			break;
		}
		if (A[i] + i > longest) {
			longest = A[i] + i;
			if (longest >= n - 1) {
				break;
			}
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

