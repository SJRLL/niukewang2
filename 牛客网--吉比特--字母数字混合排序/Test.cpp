����һ���ַ�����������[0 - 9]��Сд��ĸ[a - z]��Ҫ�����ִ�С������ĸ��a��z����
������������������ĸ����

�������� :
һ���ַ�

������� :
�����������һ���ַ�

��������1 :
a31bz

�������1 :
abz13

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while (cin >> s)
	{
		string s1, s2;
		for (int i = 0; i<s.size(); ++i)
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				s2 += s[i];
			}
			else
			{
				s1 += s[i];
			}
		}
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		cout << s1 + s2 << endl;
	}
	return 0;
}