//��֪һ���ַ�������words��Ҫ��Ѱ����������û���ظ��ַ����ַ�����ʹ���������ַ����ĳ��ȳ˻�������������ĳ˻����磺
//words = ["abcd", "wxyh", "defgh"], ���в������ظ��ַ��������ַ�����"abcd"��"wxyh"�������16
//words = ["a", "aa", "aaa", "aaaa"], �Ҳ�������Ҫ��������ַ����������0
//
//����
//["a", "ab", "abc", "cd", "bcd", "abcd"]
//
//���
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