// =====================================================================================
// 
//       Filename:  container_with_most_water.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月09日 20时38分52秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 最优解两侧不存在更优解，贪心，O(n)
 */

#include "leetcode.h"

int maxArea(vector<int> &height)
{
	int f = 0, b = height.size() - 1;
	int ans = 0;
	int cur_area;

	while (f < b) {
		cur_area = min(height[f], height[b]) * (b - f);

		if (cur_area > ans) {
			ans = cur_area;
		}

		if (height[f] < height[b]) {
			++f;
		} else {
			--b;
		}
	}

	return ans;
}

int main(int argc, char *argv[])
{

	return 0;
}

