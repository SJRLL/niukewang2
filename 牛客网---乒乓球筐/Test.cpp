
nowcoder�����У�A��B��ƹ�����к�˫ϲ�ġ��������ǵġ�����������Ҫ�б�A���Ƿ������B�������е����࣬
����ÿ���������������B���е�����������ô���أ�

�������� :
�����ж������ݡ�
ÿ�����ݰ��������ַ���A��B������A����B���е�ƹ����ÿ��ƹ������һ����д��ĸ��ʾ������ͬ���͵�ƹ����Ϊ��ͬ�Ĵ�д��ĸ��
�ַ������Ȳ�����10000��


������� :
ÿһ�������Ӧһ����������B�����������������A�ж��У�����ÿ�����������������A���������Yes�������������No����
ʾ��1
//���룺
ABCDFYE CDE
ABCDGEAS CDECDE

//�����
Yes
No

//����һ����������
//#include<stdlib.h>
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string s1, s2;
//	while (cin >> s1 >> s2)
//	{
//		sort(s1.begin(), s1.end());
//		sort(s2.begin(), s2.end());
//		int len1 = s1.size();
//		int len2 = s2.size();
//		int i = 0, j = 0;
//		while(i<len2 && j<len1)
//		{
//			if (s2[i] == s1[j])
//			{
//				i++;
//				j++;
//			}
//			else
//			{
//				j++;
//			}
//			if (j == len1 - 1)
//			{
//				break;
//			}
//		}
//		if (i !=len2)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//		}
//
//	}
//	system("pause");
//	return 0;
//}

//������������map<key,value>�����Ӧ��ĸ�ĳ��ִ���
// write your code here cpp
#include<stdlib.h>
// write your code here cpp
// write your code here cpp
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		map<char, int> AA, BB;
		for (int i = 0; i<s1.size(); ++i)
		{
			AA[s1[i]]++;
		}
		for (int j = 0; j<s2.size(); ++j)
		{
			BB[s2[j]]++;
		}
		for (int i = 'A'; i<='Z'; ++i)
		{
			if (BB[i]>AA[i])
			{
				cout << "No" << endl;
				break;
			}
			if (i == 'Z')
			{
				cout << "Yes" << endl;
			}
		}
	}
	system("pause");
	return 0;
}