������������ n �� m��������1��2��3.......n ������ȡ������, ʹ��͵��� m, Ҫ���������еĿ�������г���

�������� :
ÿ�������������2������, n��m


������� :
��ÿ����ϵ��ֵ����������, ÿ�����һ�����

//���룺  
5 5

//�����
1 4
2 3
5

#include<iostream>
#include<vector>
using namespace std;

void help(int n, int m, vector<int>& v, int beg)
{
	if (m == 0)
	{
		for (int i = 0; i<v.size(); ++i)
		{
			if (i == 0)
			{
				cout << v[i];
			}
			else
			{
				cout << " " << v[i];
			}

		}
		cout << endl;
	}
	for (int i = beg; i <= n && i <= m; ++i)
	{
		v.push_back(i);
		help(n, m - i, v, i + 1);
		v.pop_back();
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int>v;
	help(n, m, v, 1);
	return 0;
}