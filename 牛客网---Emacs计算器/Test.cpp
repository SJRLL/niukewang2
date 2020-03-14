Emacs号称神的编辑器，它自带了一个计算器。与其他计算器不同，它是基于后缀表达式的，即运算符在操作数的后面。例如“2 3 + ”等价于中缀表达式的“2 + 3”。
请你实现一个后缀表达式的计算器。

输入描述 :
输入包含多组数据。

每组数据包括两行：第一行是一个正整数n(3≤n≤50)；紧接着第二行包含n个由数值和运算符组成的列表。

“ + -*/ ”分别为加减乘除四则运算，其中除法为整除，即“5 / 3 = 1”。


输出描述 :
对应每一组数据，输出它们的运算结果。

//输入：
3
2 3 +
5
2 2 + 3 *
5
2 2 3 + *

//输出：
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