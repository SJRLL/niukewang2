//给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
//
//输入描述 :
//输入字符串(长度 <= 100000)
//
//
//输出描述 :
//	不含有重复字符的最长子串长度
//示例1
//
//输入
//abcabcbb
//
//输出
//3
//
//说明
//因为无重复字符的最长子串是"abc"，所以其长度为 3。


//解题思路：滑动窗口机制，遇到重复的字符，从头开始删除。

#include<iostream>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<unordered_set>
using namespace std;

int nrcs(string s)
{
	if (s.size() == 0)
	{
		return 0;
	}
	int left=0, maxlength;
	unordered_set<char> unset;
	for (int i = 0; i < s.size(); ++i)
	{
		while (unset.find(s[i]) != unset.end())
		{
			unset.erase(s[left]);
			left++;
		}
		maxlength = max(maxlength, i - left + 1);
		unset.insert(s[i]);
	}
	return maxlength;
}

int main()
{
	string s;
	cin >> s;
	cout << nrcs(s) << endl;
	system("pause");
	return 0;
}