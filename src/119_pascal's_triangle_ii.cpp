// =====================================================================================
// 
//       Filename:  119_pascal's_triangle_ii.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月20日 10时24分04秒
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

vector<int> getRow(int rowIndex)
{
	vector<int> cur = {1};
	
	if (rowIndex == 0) {
		return cur;
	}

	cur.push_back(1);

	for (int i = 1; i != rowIndex; ++i) {
		for (int j = cur.size() - 1; j != 0; --j) {
			cur[j] = cur[j - 1] + cur[j];
		}
		cur.push_back(1);
	}

	return cur;
}

int main(int argc, char *argv[])
{


	return 0;
}

