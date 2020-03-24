1.题目描述
计算一系列数的和

输入描述 :
输入数据包括多组。
每组数据一行, 每行的第一个整数为整数的个数n(1 <= n <= 100), n为0的时候结束输入。
接下来n个正整数, 即需要求和的每个正整数。
输出描述 :
每组数据输出求和的结果
示例1

//输入：

4 1 2 3 4
5 1 2 3 4 5
0

//输出：

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

2.题目描述
计算一系列数的和

输入描述 :
输入的第一行包括一个正整数t(1 <= t <= 100), 表示数据组数。
接下来t行, 每行一组数据。
每行的第一个整数为整数的个数n(1 <= n <= 100)。
接下来n个正整数, 即需要求和的每个正整数。
输出描述 :
每组数据输出求和的结果
示例1
输入

2
4 1 2 3 4
5 1 2 3 4 5

输出

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

3.题目描述
计算一系列数的和

输入描述 :
输入数据有多组, 每行表示一组输入数据。
每行的第一个整数为整数的个数n(1 <= n <= 100)。
接下来n个正整数, 即需要求和的每个正整数。
输出描述 :
每组数据输出求和的结果

示例1
输入：
4 1 2 3 4
5 1 2 3 4 5

输出：
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

4.题目描述
计算一系列数的和
输入描述 :
输入数据有多组, 每行表示一组输入数据。

每行不定有n个整数，空格隔开。(1 <= n <= 100)。
输出描述 :
每组数据输出求和的结果
示例1
输入

1 2 3
4 5
0 0 0 0 0

输出

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
