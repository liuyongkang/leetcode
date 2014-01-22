// =====================================================================================
// 
//       Filename:  118_pascal's_triangle.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 10时08分50秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 模拟
 */

#include "leetcode.h"

vector<vector<int>> generate(int numRows)
{
	vector<vector<int>> ans;
	vector<int> cur = {1};
	
	if (numRows == 0) {
		return ans;
	}

	ans.push_back(cur);
	cur.push_back(1);

	for (int i = 1; i != numRows; ++i) {
		ans.push_back(cur);
		for (int j = cur.size() - 1; j != 0; --j) {
			cur[j] = cur[j - 1] + cur[j];
		}
		cur.push_back(1);
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

