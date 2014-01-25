// =====================================================================================
// 
//       Filename:  073_set_matrix_zeroes.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月23日 20时35分52秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 很简单的标记
 */

#include "leetcode.h"

void setZeroes(vector<vector<int>> &matrix)
{
	if (!matrix.size()) {
		return;
	}

	int m = matrix.size(), n = matrix[0].size();
	vector<int> row(m, 0), column(n, 0);

	for (int i = 0; i != m; ++i) {
		for (int j = 0; j != n; ++j) {
			if (!matrix[i][j]) {
				row[i] = 1;
				column[j] = 1;
			}
		}
	}

	for (int i = 0; i != m; ++i) {
		if (row[i]) {
			for (int j = 0; j != n; ++j) {
				matrix[i][j] = 0;
			}
		}
	}

	for (int i = 0; i != n; ++i) {
		if (column[i]) {
			for (int j = 0; j != m; ++j) {
				matrix[j][i] = 0;
			}
		}
	}
}

int main(int argc, char *argv[])
{


	return 0;
}

