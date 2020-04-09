#include<iostream>
#include<stdlib.h>
#include<string>
#include<algorithm>

using namespace std;

string add(string s1, string s2)
{
	s1 = s1.substr(s1.find_first_not_of('0'));//找到第一个不是0的位置，排除0005这些情况
	s2 = s2.substr(s2.find_first_not_of('0'));
	long long lens1 = s1.length();
	long long lens2 = s2.length();
	long long len = max(lens1, lens2) + 1;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	string ans(len, '0');

	for (int i = 0; i<lens1; ++i)
	{
		ans[i] = s1[i];
	}
	int temp = 0;
	for (int i = 0; i<len; ++i)
	{
		if (i<s2.size())
		{
			temp += (ans[i] - '0') + (s2[i] - '0');
		}
		else
		{
			temp += (ans[i] - '0');
		}
		ans[i] = temp % 10 + '0';
		temp /= 10;
	}
	reverse(ans.begin(), ans.end());
	return ans.substr(ans.find_first_not_of('0'));
}

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	cout << add(s1, s2) << endl;
	system("pause");
	return 0;
}