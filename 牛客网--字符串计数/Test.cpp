
题目描述：求字典序在s1和s2之间的长度在len1和len2之间的字符串个数，结果为mod 10000007

思路：先求出字符串s1到字符串a之间差的字符串个数，再求出字符串s2到a相差的个数，然后两者想减之差就是字符串个数

//输入：
ab ce 1 2

//输出：
56
#include<iostream>
#include<string>
using namespace std;

int Fun(string& s)
{
	int ret = 0;
	for (int i = 0; i<s.size(); ++i)
	{
		ret = ret * 26 + s[i] - 'a';  //从字符串a到这个字符串有多少个不同的字符串
	}
	return ret;
}

int main()
{
	string s1, s2;
	int l1, l2;
	while (cin >> s1 >> s2 >> l1 >> l2)
	{
		cout << (Fun(s2) - Fun(s1) - 1) % 1000007 << endl; //计算两者之间的差距
	}
}