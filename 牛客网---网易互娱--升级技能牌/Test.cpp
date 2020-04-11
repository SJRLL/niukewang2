#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	string s1, s2, s3;
	while (cin >> s1 >> s2 >> s3)
	{
		string maxstr;
		if (a>b)
		{
			swap(s1, s2);
			for (int i = 0; i<s1.size(); ++i)
			{
				for (int j = i; j<s1.size(); ++j)
				{
					string s = s1.substr(i, j - i + 1);
					if (int(s2.find(s))<0)
					{
						break;
					}
					else if (s.size()>maxstr.size())
					{
						maxstr = s;
					}
				}
			}
		}
		string Maxstr;
		int d = maxstr.size();
		if (c>d)
		{
			swap(s3, maxstr);
		}
		for (int i = 0; i<s3.size(); ++i)
		{
			for (int j = i; j<s3.size(); ++j)
			{
				string q = s3.substr(i, j - i + 1);
				if (int(maxstr.find(q))<0)
				{
					break;
				}
				else if (q.size()>Maxstr.size())
				{
					Maxstr = q;
				}
			}
		}
		int e = Maxstr.size();
		cout << e << endl;
	}
}