����һ��long���͵���ֵ, �����ֵ�Ķ����Ʊ�ʾ�е�1�ĸ��� .


��������:
long ���͵���ֵ

������� :
����ֵ�����Ʊ�ʾ��1�ĸ���

��������1 :
3

�������1 :
	  2

  ����˵��1 :
		3�Ķ����Ʊ�ʾ : 11, ����1����Ϊ2

	��������2 :
65

�������2 :
	  2

  ����˵��2 :
		65�Ķ�����Ϊ : 1000001�����ԣ��ĸ���Ϊ����

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;
	while (cin >> n)
	{
		unsigned long flag = 1;
		long count;
		while (flag)
		{
			if (n& flag)
			{
				count++;
			}
			flag = flag << 1;
		}
		cout << count << endl;
	}
	return 0;
}