�㳡��վ��һ֧���飬����������ȫ�����ص�Ť������ӣ����������ǵ�������ݣ������æ�ҳ�������ε����������С� 
����������������ǣ�1��7��3��5��9��4��8�����������ε������������У�1��7������1��3��5��9������1��3��4��8���ȣ�������ĳ���Ϊ4��

�������� :
��������������ݣ�ÿ�����ݵ�һ�а���һ��������n��1��n��1000����

�����ŵڶ��а���n��������m��1��n��10000�������������ÿλ��Ա����ߡ�


������� :
��Ӧÿһ�����ݣ��������������еĳ��ȡ�
ʾ��1
����
7
1 7 3 5 9 4 8

6
1 3 5 2 4 6
���
4
4

// write your code here cpp
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> v(n, 0);
		for (int i = 0; i<n; ++i)
		{
			cin >> v[i];
		}
		int result = 1;
		vector<int> f(n, 1);
		for (int i = 1; i<n; ++i)
		{
			for (int j = 0; j<i; ++j)
			{
				if (v[i]>v[j])
				{
					f[i] = max(f[j] + 1, f[i]);
				}
			}
			result = max(f[i], result);
		}
		cout << result << endl;
	}
	system("pause");
	return 0;
}