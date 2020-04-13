//����һ���ַ����������ҳ����в������ظ��ַ��� ��Ӵ� �ĳ��ȡ�
//
//�������� :
//�����ַ���(���� <= 100000)
//
//
//������� :
//	�������ظ��ַ�����Ӵ�����
//ʾ��1
//
//����
//abcabcbb
//
//���
//3
//
//˵��
//��Ϊ���ظ��ַ�����Ӵ���"abc"�������䳤��Ϊ 3��


//����˼·���������ڻ��ƣ������ظ����ַ�����ͷ��ʼɾ����

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