NowCoder最喜欢游乐场的迷宫游戏，他和小伙伴们比赛谁先走出迷宫。
现在把迷宫的地图给你，你能帮他算出最快走出迷宫需要多少步吗？

输入描述 :
输入包含多组数据。

每组数据包含一个10 * 10，由“#”和“.”组成的迷宫。其中“#”代表墙；“.”代表通路。

入口在第一行第二列；出口在最后一行第九列。

从任意一个“.”点都能一步走到上下左右四个方向的“.”点。


输出描述 :
对应每组数据，输出从入口到出口最短需要几步。

// write your code here cpp
#include <iostream>
#include <vector>
#include <string>

#define N 10

using namespace std;


void calculate(vector<string>& board, vector<vector<int>>& len, int x, int y)
{
	vector<vector<int>> b = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
	for (int i = 0; i < 4; i++)
	{
		int nx = x + b[i][0];
		int ny = y + b[i][1];
		if (nx < 10 && nx >= 0 && ny < 10 && ny >= 0 && board[nx][ny] != '#')
		{
			if (len[nx][ny] == 0 || (len[x][y] + 1 < len[nx][ny]))
			{
				len[nx][ny] = len[x][y] + 1;
				calculate(board, len, nx, ny);
			}
		}
	}
}
int main()
{
	vector<string> board(N);
	while (getline(cin, board[0]))
	{
		vector<vector<int>> len(N, vector<int>(N, 0));
		for (int i = 1; i < N; i++)
			getline(cin, board[i]);
		calculate(board, len, 0, 1);
		cout << len[9][8] << endl;
	}
	return 0;
}
