1.��Ŀ����
����һϵ�����ĺ�

�������� :
�������ݰ������顣
ÿ������һ��, ÿ�еĵ�һ������Ϊ�����ĸ���n(1 <= n <= 100), nΪ0��ʱ��������롣
������n��������, ����Ҫ��͵�ÿ����������
������� :
ÿ�����������͵Ľ��
ʾ��1

//���룺

4 1 2 3 4
5 1 2 3 4 5
0

//�����

10
15

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, a, sum;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		sum = 0;
		for (int i = 0; i<n; ++i)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	return 0;
}

2.��Ŀ����
����һϵ�����ĺ�

�������� :
����ĵ�һ�а���һ��������t(1 <= t <= 100), ��ʾ����������
������t��, ÿ��һ�����ݡ�
ÿ�еĵ�һ������Ϊ�����ĸ���n(1 <= n <= 100)��
������n��������, ����Ҫ��͵�ÿ����������
������� :
ÿ�����������͵Ľ��
ʾ��1
����

2
4 1 2 3 4
5 1 2 3 4 5

���

10
15

#include<iostream>
using namespace std;
int main()
{
	int t, n, a, sum;
	cin >> t;
	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		sum = 0;
		for (int i = 0; i<n; ++i)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	return 0;
}

3.��Ŀ����
����һϵ�����ĺ�

�������� :
���������ж���, ÿ�б�ʾһ���������ݡ�
ÿ�еĵ�һ������Ϊ�����ĸ���n(1 <= n <= 100)��
������n��������, ����Ҫ��͵�ÿ����������
������� :
ÿ�����������͵Ľ��

ʾ��1
���룺
4 1 2 3 4
5 1 2 3 4 5

�����
10
15

#include<iostream>
using namespace std;
int main()
{
	int n, a, sum;
	while (cin >> n)
	{
		sum = 0;
		for (int i = 0; i<n; ++i)
		{
			cin >> a;
			sum += a;
		}
		cout << sum << endl;
	}
	return 0;
}

4.��Ŀ����
����һϵ�����ĺ�
�������� :
���������ж���, ÿ�б�ʾһ���������ݡ�

ÿ�в�����n���������ո������(1 <= n <= 100)��
������� :
ÿ�����������͵Ľ��
ʾ��1
����

1 2 3
4 5
0 0 0 0 0

���

6
9
0

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
	int m, sum;
	sum = 0;
	while (cin >> m)
	{

		sum += m;
		if (getchar() == '\n')
		{
			cout << sum << endl;
			sum = 0;
		}
	}
}
