nowcoderҪ�����ѽ���һЩ���е���Ϣ���������ĵ绰����ȡ������Ҫ����Щ������Ϣ���л�����
�����������м����һЩ����ķ��ţ�������������һ�����롣
���������æ����һ����򣬽�����nowcoder�Ƕ����յ�����Ϣ����ȡ���м����õ���Ϣ��

�������� :
�����ж��С�

ÿһ����һ�ξ������ܵ���Ϣ�����п��ܰ����ո񣩣�����ԭʼ��Ϣ���Ȳ�ȷ����


������� :
���ÿ����Ϣ��������Ϣ��

//���룺
$Ts!47 & *s456  a23* +B9k

//�����
47456239

// write your code here cpp
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		string res;
		for (int i = 0; i<s.size(); ++i)
		{
			if (s[i] <= '9' &&s[i] >= '0')
			{
				res += s[i];
			}
		}
		cout << res << endl;
	}
	return 0;
}