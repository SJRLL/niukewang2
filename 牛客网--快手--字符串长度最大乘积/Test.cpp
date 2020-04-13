//已知一个字符串数组words，要求寻找其中两个没有重复字符的字符串，使得这两个字符串的长度乘积最大，输出这个最大的乘积。如：
//words = ["abcd", "wxyh", "defgh"], 其中不包含重复字符的两个字符串是"abcd"和"wxyh"，则输出16
//words = ["a", "aa", "aaa", "aaaa"], 找不到满足要求的两个字符串，则输出0
//
//输入
//["a", "ab", "abc", "cd", "bcd", "abcd"]
//
//输出
//4
//
#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;

bool Isgoodstr(string s1, string s2)
{
	for (int i = 0; i<s1.size(); ++i)
	{
		for (int j = 0; j<s2.size(); ++j)
		{
			if (s1[i] == s2[j])
			{
				return false;
				break;
			}
		}
	}
	return true;
}

int main()
{
	string s;
	vector<string> vs;
	getline(cin, s);
	for (int i = 0; i<s.size(); ++i)
	{
		if (s[i] == '"')
		{
			string word = "";
			i++;
			while (s[i] != '"')
			{
				word += s[i];
				i++;
			}
			vs.push_back(word);
		}

	}

	int Max = 0;
	for (int i = 0; i<vs.size(); ++i)
	{
		for (int j = i; j<vs.size(); ++j)
		{
			if (Isgoodstr(vs[i], vs[j]))
			{
				int res = vs[i].size()*vs[j].size();
				Max = max(Max, res);
			}

		}
	}
	cout << Max << endl;
	system("pause");
	return 0;
}