//��������:
//�������ֵ��е��ʵĸ���n��������n��������Ϊ�ֵ䵥�ʡ�
//������һ�����ʣ����������ֵ����ֵܵ��ʵĸ���m
//����������k
//
//������� :
//�������룬������ҵ����ֵܵ��ʵĸ���m
//Ȼ��������ҵ����ֵܵ��ʵĵ�k�����ʡ�
//
////���룺
//3 abc bca cab abc 1
//
////�����
//2
//bca

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool Isbrother(string str, string s)
{
	if (str.size() == s.size())
	{
		if (str == s)
		{
			return false;
		}
		sort(str.begin(), str.end());
		sort(s.begin(), s.end());
		if (str == s)
		{
			return true;
		}
	}
	return false;

}

int main()
{
	int n;
	while (cin >> n)
	{
		string str;
		string word, s;
		int index;
		vector<string> vs;
		for (int i = 0; i<n; ++i)
		{
			cin >> str;
			vs.push_back(str);
		}
		sort(vs.begin(), vs.end());
		cin >> word;
		cin >> index;
		int count = 0;
		for (int i = 0; i<n; ++i)
		{
			if (Isbrother(word, vs[i]))
			{
				count++;
				if (count == index)
				{
					s = vs[i];
				}
			}

		}
		if (!vs.empty())
		{
			cout << count << endl;
		}
		if (count >= index)
		{
			cout << s << endl;
		}

	}
}