Emacs�ų���ı༭�������Դ���һ������������������������ͬ�����ǻ��ں�׺���ʽ�ģ���������ڲ������ĺ��档���硰2 3 + ���ȼ�����׺���ʽ�ġ�2 + 3����
����ʵ��һ����׺���ʽ�ļ�������

�������� :
��������������ݡ�

ÿ�����ݰ������У���һ����һ��������n(3��n��50)�������ŵڶ��а���n������ֵ���������ɵ��б�

�� + -*/ ���ֱ�Ϊ�Ӽ��˳��������㣬���г���Ϊ����������5 / 3 = 1����


������� :
��Ӧÿһ�����ݣ�������ǵ���������

//���룺
3
2 3 +
5
2 2 + 3 *
5
2 2 3 + *

//�����
5
12
10

// write your code here cpp
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		getchar();
		stack<int> st;
		for (int i = 0; i<n; ++i)
		{
			int sum = 0;
			string ch;
			cin >> ch;
			if (ch[0] == '+' || ch[0] == '-' || ch[0] == '*' || ch[0] == '/')
			{
				int right = st.top();
				st.pop();
				int left = st.top();
				st.pop();
				if (ch[0] == '+')
				{
					sum = left + right;
				}
				if (ch[0] == '-')
				{
					sum = left - right;
				}
				if (ch[0] == '*')
				{
					sum = left*right;
				}
				if (ch[0] == '/')
				{
					if (right != 0)
					{
						sum = left / right;
					}
					else
					{
						return 0;
					}
				}
				st.push(sum);
			}
			else
			{
				st.push(atoi(ch.c_str()));
			}
		}
		cout << (int)st.top() << endl;
	}
	return 0;
}