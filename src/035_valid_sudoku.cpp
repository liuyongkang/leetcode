// =====================================================================================
// 
//       Filename:  034_valid_sudoku.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年01月13日 18时22分48秒
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

int judge(char c)
{
	if (c == '.') {
		return 0;
	} else {
		return c - '0';
	}
}

bool isValidRow(vector<vector<char>> &board)
{
	for (int i = 0; i != 9; ++i) {
		int num[10] = {10, 2, 2, 2, 2, 2, 2, 2, 2, 2};
		for (int j = 0; j != 9; ++j) {
			if ((--num[judge(board[i][j])]) == 0) {
				return false;
			}
		}
	}

	return true;
}

bool isValidColumn(vector<vector<char>> &board)
{
	for (int i = 0; i != 9; ++i) {
		int num[10] = {10, 2, 2, 2, 2, 2, 2, 2, 2, 2};
		for (int j = 0; j != 9; ++j) {
			if ((--num[judge(board[j][i])]) == 0) {
				return false;
			}
		}
	}

	return true;
}

bool isValidSubbox(vector<vector<char>> &board)
{
	int position[9][2] = {
		{0, 0}, {1, 0}, {2, 0},
		{0, 1}, {1, 1}, {2, 1},
		{0, 2}, {1, 2}, {2, 2}
	};

	for (int i = 0; i != 9; ++i) {
		int num[10] = {10, 2, 2, 2, 2, 2, 2, 2, 2, 2};
		for (int j = 0; j != 9; ++j) {
			if ((--num[judge(board[position[i][0] * 3 + position[j][0]][position[i][1] * 3 + position[j][1]])]) == 0) {
				return false;
			}
		}
	}

	return true;
}

bool isValidSudoku(vector<vector<char>> &board)
{
	return isValidRow(board) && isValidColumn(board) && isValidSubbox(board);
}

int main(int argc, char *argv[])
{


	return 0;
}

