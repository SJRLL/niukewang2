1.��Ŀ����
��������ַ���������������
�������� :
���������У���һ��n

�ڶ�����n���ո�������ַ���
������� :
���һ���������ַ������ո�������޽�β�ո�
ʾ��1

����

5
c d a bb e

���

a bb c d e

#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string arr[n];

	for (int i = 0; i<n; ++i)
	{
		cin >> arr[i];
	}

	for (int j = 0; j<n; j++){
		for (int i = n - 1; i>0; i--){
			if (arr[i].compare(arr[i - 1])<0){
				string tmp = arr[i - 1];
				arr[i - 1] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	//sort(arr.begin(),arr.end());
	for (int i = 0; i<n - 1; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << arr[n - 1];
	return 0;
}

2.��Ŀ����
��������ַ���������������
�������� :
�������������ÿ����������һ�С�

ÿ��ͨ���ո��������n���ַ���n��100
������� :
����ÿ��������������һ����������ַ�����ÿ���ַ���ͨ���ո����
ʾ��1
����

a c bb
f dddd
nowcoder

���

a bb c
dddd f
nowcoder

#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	string s;
	vector<string> vs;
	while (cin >> s)
	{
		vs.push_back(s);
		if (cin.peek() == '\n' || cin.peek() == '\0')
		{
			sort(vs.begin(), vs.end());
			for (int i = 0; i<vs.size() - 1; ++i)
			{
				cout << vs[i] << " ";
			}
			cout << vs[vs.size() - 1] << endl;
			vs.clear();
		}
	}
	return 0;
}

3.��Ŀ����
��������ַ���������������
�������� :
�������������ÿ����������һ�С�
ÿ��ͨ��, ��������n���ַ���n��100
������� :
����ÿ���������һ���������ַ�������','�������޽�β�ո�
ʾ��1

����

a, c, bb
f, dddd
nowcoder

���

a, bb, c
dddd, f
nowcoder

#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
	string str;
	vector<string> vs;
	while (getline(cin, str))
	{
		stringstream ss;
		ss << str;
		string s;
		while (getline(ss, s, ','))
		{
			vs.push_back(s);
		}

		sort(vs.begin(), vs.end());
		for (int i = 0; i<vs.size() - 1; ++i)
		{
			cout << vs[i] << ",";
		}
		cout << vs[vs.size() - 1] << endl;
		vs.clear();
	}
	return 0;
}