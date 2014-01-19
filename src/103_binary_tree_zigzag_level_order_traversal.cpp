// =====================================================================================
// 
//       Filename:  103_binary_tree_zigzag_level_order_traversal.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 18时59分27秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * 还是bfs
 */

#include "leetcode.h"
#include "tree.h"

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{
	deque<TreeNode *> d;
	stack<TreeNode *> s;
	vector<vector<int>> ans;

	if (!root) {
		return ans;
	}

	d.push_back(root);
	while (!d.empty()) {
		list<int> cur_level;
		while (!d.empty()) {
			cur_level.push_front(d.back()->val);
			if (d.back()->right) {
				s.push(d.back()->right);
			}
			if (d.back()->left) {
				s.push(d.back()->left);
			}
			d.pop_back();
		}
		vector<int> tmp1(cur_level.begin(), cur_level.end());
		ans.push_back(tmp1);
		
		if (s.empty()) {
			break;
		}
		
		cur_level.clear();
		while (!s.empty()) {
			cur_level.push_front(s.top()->val);
			if (s.top()->left) {
				d.push_back(s.top()->left);
			}
			if (s.top()->right) {
				d.push_back(s.top()->right);
			}
			s.pop();
		}
		vector<int> tmp2(cur_level.begin(), cur_level.end());
		ans.push_back(tmp2);
	}

	return ans;
}

int main(int argc, char *argv[])
{


	return 0;
}

