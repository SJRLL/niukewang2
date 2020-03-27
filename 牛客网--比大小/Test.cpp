给定一个整数数组，返回一个数组。该返回数组中第i个数字为，原数组中第i个位置的数字至少往右走多少步才能遇到比它大的数字。
如果遇不到或者已经处于最右的位置，则置为 - 1。


输入描述 :
输入为多行，第一行为一个整数N，1≤N≤106

接下来一共有N行，每一行为一个整数M，0≤M≤232 - 1



输出描述 :
	 输出 N 行，每行一个数字表示转换之后的数组

	 示例1

	 输入
	 5
	 91
	 10
	 3
	 22
	 40

	 输出
	 - 1
	 2
	 1
	 1
	 - 1

#include <iostream>
#include <stack>
using namespace std;

const int MAXN = 1000005;
int num[MAXN];
int des[MAXN];

int main()
{
	int n;
	cin >> n;
	stack<int> vt;
	for (int i = 0; i<n; ++i)
	{
		cin >> num[i];
		des[i] = -1;
	}
	int index = 0;
	while (index<n)
	{
		if (!vt.empty() && num[vt.top()]<num[index])
		{
			int cur = vt.top();
			vt.pop();
			des[cur] = index - cur;
		}
		else
		{
			vt.push(index);
			index++;
		}
	}
	for (int i = 0; i<n; ++i)
	{
		cout << des[i] << endl;
	}
	return 0;
}