NowCoder��ϲ�����ֳ����Թ���Ϸ������С����Ǳ���˭���߳��Թ���
���ڰ��Թ��ĵ�ͼ���㣬���ܰ����������߳��Թ���Ҫ���ٲ���

�������� :
��������������ݡ�

ÿ�����ݰ���һ��10 * 10���ɡ�#���͡�.����ɵ��Թ������С�#������ǽ����.������ͨ·��

����ڵ�һ�еڶ��У����������һ�еھ��С�

������һ����.���㶼��һ���ߵ����������ĸ�����ġ�.���㡣


������� :
��Ӧÿ�����ݣ��������ڵ����������Ҫ������

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
