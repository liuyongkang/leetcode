// =====================================================================================
// 
//       Filename:  102_binary_tree_level_order_traversal.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月18日 18时44分06秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

/**
 * bfs
 */

#include "leetcode.h"
#include "tree.h"

vector<vector<int>> levelOrder(TreeNode *root)
{
	queue<TreeNode *> q1, q2;
	vector<vector<int>> ans;

	if (!root) {
		return ans;
	}

	q1.push(root);
	while (!q1.empty()) {
		vector<int> cur_level;
		while (!q1.empty()) {
			cur_level.push_back(q1.front()->val);
			if (q1.front()->left) {
				q2.push(q1.front()->left);
			}
			if (q1.front()->right) {
				q2.push(q1.front()->right);
			}
			q1.pop();
		}
		ans.push_back(cur_level);
		
		if (q2.empty()) {
			break;
		}
		
		cur_level.clear();
		while (!q2.empty()) {
			cur_level.push_back(q2.front()->val);
			if (q2.front()->left) {
				q1.push(q2.front()->left);
			}
			if (q2.front()->right) {
				q1.push(q2.front()->right);
			}
			q2.pop();
		}
		ans.push_back(cur_level);
	}
}

int main(int argc, char *argv[])
{


	return 0;
}

