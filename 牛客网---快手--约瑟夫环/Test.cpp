Լɪ����һ����ѧ��Ӧ�����⣺��֪n���ˣ��Ա��1��2��3...n�ֱ��ʾ��Χ����һ��Բ����Χ��
�ӱ��Ϊk���˿�ʼ����������m���Ǹ��˳��У�������һ�����ִ�1��ʼ����������m���Ǹ����ֳ��У�
���˹����ظ���ȥ��ֱ��Բ����Χ����ȫ�����С�д����ʵ���������̡�

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
	while (count < n - 1)//count==n-1ʱ����
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