
��Ŀ���������ֵ�����s1��s2֮��ĳ�����len1��len2֮����ַ������������Ϊmod 10000007

˼·��������ַ���s1���ַ���a֮�����ַ���������������ַ���s2��a���ĸ�����Ȼ���������֮������ַ�������

//���룺
ab ce 1 2

//�����
56
#include<iostream>
#include<string>
using namespace std;

int Fun(string& s)
{
	int ret = 0;
	for (int i = 0; i<s.size(); ++i)
	{
		ret = ret * 26 + s[i] - 'a';  //���ַ���a������ַ����ж��ٸ���ͬ���ַ���
	}
	return ret;
}

int main()
{
	string s1, s2;
	int l1, l2;
	while (cin >> s1 >> s2 >> l1 >> l2)
	{
		cout << (Fun(s2) - Fun(s1) - 1) % 1000007 << endl; //��������֮��Ĳ��
	}
}