#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int  M;
	vector<int>v(20);
	while (cin >> M)
	{
		for (int i = 5; i <= 20; ++i)
		{
			cin >> v[i];
		}
		int i, j, res;
		int flag = 0;
		int sum;
		for (i = 0; i<v.size(); ++i)
		{
			if (v[i] == M)
			{
				res = i;
				flag = 2;
			}
			for (j = 0; j<v.size(); ++j)
			{
				if (M - v[i] == v[j])
				{
					flag= 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			sum = i*j;
		}
		else if (flag == 2)
		{
			sum = M;
		}
		else
		{
			sum = -1;
		}
		return sum;
	}