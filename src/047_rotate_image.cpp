// =====================================================================================
// 
//       Filename:  047_rotate_image.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 10时08分20秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 找出规律即可
 */

#include "leetcode.h"

void rotate(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int tmp1, tmp2;
	int cur_i, cur_j;
	int next_i, next_j;

	for (int i = 0; i < (n + 1) / 2; ++i) {
		for (int j = 0; j < n / 2; ++j) {
			cur_i = i;
			cur_j = j;
			tmp1 = matrix[cur_i][cur_j];
			for (int k = 0; k != 3; ++k) {
				next_i = cur_j;
				next_j = n - cur_i - 1;
				tmp2 = matrix[next_i][next_j];
				matrix[next_i][next_j] = tmp1;
				tmp1 = tmp2;
				cur_i = next_i;
				cur_j = next_j;
			}
			matrix[i][j] = tmp1;
		}
	}
}

int main(int argc, char *argv[])
{
	vector<vector<int>> m = {{1,2,3},{4,5,6},{7,8,9}};
	rotate(m);


	return 0;
}

