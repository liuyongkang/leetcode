// =====================================================================================
// 
//       Filename:  055_merge_interval.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月17日 14时07分27秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 排序之后合并即可
 */

#include "leetcode.h"

struct Interval {
	int start;
	int end;
	Interval() : start(0), end(0) {}
	Interval(int s, int e) : start(s), end(e) {}
};

bool cmp(const Interval &lfs, const Interval &rfs)
{
	if (lfs.start == rfs.start) {
		return lfs.end < rfs.end;
	} else {
		return lfs.start < rfs.start;
	}
}

vector<Interval> merge(vector<Interval> &intervals)
{
	vector<Interval> ans;
	int b, e;

	sort(intervals.begin(), intervals.end(), cmp);

	auto iter = intervals.begin();
	while (iter != intervals.end()) {
		b = iter->start;
		e = iter->end;

		++iter;
		for (; iter != intervals.end(); ++iter) {
			if (iter->start <= e) {
				if (iter->end > e) {
					e = iter->end;
				}
			} else {
				break;
			}
		}
		ans.push_back(Interval(b, e));
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

