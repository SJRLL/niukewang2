约瑟夫环是一个数学的应用问题：已知n个人（以编号1，2，3...n分别表示）围坐在一张圆桌周围。
从编号为k的人开始报数，数到m的那个人出列；他的下一个人又从1开始报数，数到m的那个人又出列；
依此规律重复下去，直到圆桌周围的人全部出列。写程序实现上述过程。

#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	int m;
	int k;
	cin >> n >> m >> k;
	vector<int>inp(n);

	for (int i = 0; i < n; i++)
	{
		inp[i] = i + 1;
	}

	int count = 0;
	int renshu = n;
	int cur = k - 1;
	while (count < n - 1)//count==n-1时结束
	{
		if (cur + m > renshu)
		{
			if ((cur + m) % renshu == 0)
				cur = renshu - 1;
			else
				cur = 0 + ((cur + m) % renshu) - 1;
		}
		else
			cur = cur + m - 1;
		renshu--;
		count++;
		inp.erase(inp.begin() + cur);
	}
	cout << inp[0];
	system("pause");
	return 0;
}