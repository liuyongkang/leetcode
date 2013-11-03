// =====================================================================================
// 
//       Filename:  two_sum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2013年11月03日 14时33分27秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/*
 * 保留索引进行排序O(n*log(n))，然后在查找O(n)，最后输出, 时间复杂度O(n*log(n))
 */


#include "leetcode.h"

struct node {
	node(int v, int i) : value(v), index(i) {} 
	int value;
	int index;
};

bool operator<(const node &lfs, const node &rfs)
{
	if (lfs.value == rfs.value) {
		return lfs.index < rfs.index;
	} else {
		return lfs.value < rfs.value;
	}
}

vector<int> twoSum(vector<int> &numbers, int target)
{
	int n = numbers.size();
	vector<node> tran_numbers;

	// 保存顺序
	for (int i = 0; i != n; ++i) {
		tran_numbers.push_back(node(numbers[i], i + 1));
	}
	
	// 稳定排序
	sort(tran_numbers.begin(), tran_numbers.end());

	// 首尾置针法查找
	int f = 0, b = n - 1;
	while (f < b) {
		if (tran_numbers[f].value + tran_numbers[b].value < target) {
			++f;
		} else if (tran_numbers[f].value + tran_numbers[b].value > target) {
			--b;
		} else {
			break;
		}
	}

	// 调整顺序
	vector<int> ans;
	if (tran_numbers[b].index < tran_numbers[f].index) {
		ans.push_back(tran_numbers[b].index);
		ans.push_back(tran_numbers[f].index);
	} else {
		ans.push_back(tran_numbers[f].index);
		ans.push_back(tran_numbers[b].index);
	}

	return ans;
}


int main(int argc, char *argv[])
{
	int a[] = {2, 7, 11, 15};
	vector<int> test(a, a + 4), ans;

	ans = twoSum(test, 9);

	cout << ans[0] << " " << ans[1] << endl;

	return 0;
}

