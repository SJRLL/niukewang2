����һ�������������飬�������������ֵ�˳�� ����ż��λ�������ǰ�벿�֣�ʹ����������λ������ĺ�벿�֡�
Ҫ��ʱ�临�Ӷ�ΪO(n)��

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