输入一个无序整数数组，调整数组中数字的顺序， 所有偶数位于数组的前半部分，使得所有奇数位于数组的后半部分。
要求时间复杂度为O(n)。

#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	int t;
	while (cin >> t)
	{
		v.push_back(t);
	}
	int i = 0, j = v.size() - 1;
	while (i != j)
	{
		while (i<j && !(v[i] & 1))
		{
			i++;
		}
		while (i<j && v[j] & 1)
		{
			j--;
		}
		swap(v[i], v[j]);
	}
	for (int k = 0; k<v.size(); ++k)
	{
		cout << v[k] << endl;
	}
	return 0;

}