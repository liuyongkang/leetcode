// =====================================================================================
// 
//       Filename:  130_surrounded_regions.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月10日 17时26分54秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Nick (LiuYongkang), liuyongkanglinux@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "leetcode.h"

void solve(vector<vector<char>> &board)
{
	if (!board.size()) {
		return;
	}

	int m = board.size(), n = board[0].size();

	for (int i = 0; i != m; ++i) {
		for (int j = 0; j != n; ++j) {
			if (board[i][j] == 'O') {
				board[i][j] = 'Z';
			}
		}
	}

	queue<int> q;

	for (int i = 0; i != n; ++i) {
		if (board[0][i] == 'Z') {
			q.push(i);
		}
		if (board[m - 1][i] == 'Z') {
			q.push((m - 1) * n + i);
		}
	}
	for (int i = 0; i != m; ++i) {
		if (board[i][n - 1] == 'Z') {
			q.push(i * n + n - 1);
		}
		if (board[i][0] == 'Z') {
			q.push(i * n);
		}
	}

	while (!q.empty()) {
		int x = q.front() / n, y = q.front() % n;
		q.pop();

		if (board[x][y] == 'O') {
			continue;
		}

		board[x][y] = 'O';
		if (x != 0 && board[x - 1][y] == 'Z') {
			q.push((x - 1) * n + y);
		}
		if (x != m - 1 && board[x + 1][y] == 'Z') {
			q.push((x + 1) * n + y);
		}
		if (y != 0 && board[x][y - 1] == 'Z') {
			q.push(x * n + y - 1);
		}
		if (y != n - 1 && board[x][y + 1] == 'Z') {
			q.push(x * n + y + 1);
		}
	}

	for (int i = 0; i != m; ++i) {
		for (int j = 0; j != n; ++j) {
			if (board[i][j] == 'Z') {
				board[i][j] = 'X';
			}
		}
	}
}

int main(int argc, char *argv[])
{

	vector<char> one = {'O', 'X', 'O', 'X', 'O', 'X'};
	vector<char> er = {'X', 'O', 'X', 'O', 'X', 'O'};
	vector<vector<char>> board;

	board.push_back(er);
	board.push_back(one);
	board.push_back(er);
	board.push_back(one);

	solve(board);

	return 0;
}

