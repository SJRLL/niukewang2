#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

string Less(string s1, string s2)  //Ä¬ÈÏs1>s2
{
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	for (int i = 0; i < s2.size(); ++i)
	{
		if (s1[i] >= s2[i])
		{
			s1[i] = s1[i] - s2[i] + '0';
		}
		else //½èÎ»ÔËËã 
		{
			int k = 1;
			while (s1[i + k] == '0')
			{
				s1[i + k] = '9';
				k++;
			}
			s1[i + k] = s1[i + k] - '1' + '0';
			s1[i] = (s1[i] - '0' + 10) - (s2[i] - '0') + '0';
		}
	}
	reverse(s1.begin(), s1.end());
	if (s1.find_first_not_of('0') == string::npos)
	{
		return "0";
	}

	return s1.substr(s1.find_first_not_of('0'));
}

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	cout << Less(s1, s2) << endl;
	system("pause");
	return 0;
}