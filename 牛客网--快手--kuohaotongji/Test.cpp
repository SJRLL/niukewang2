输入一串字符串，找出有效的括号对数、左括号对数、右括号对数

//#include<iostream>
//#include<stdlib.h>
//#include<string>
//using namespace std;
//int main()
//{
//	string str;
//	while (cin >> str)
//	{
//		int leftcount = 0;
//		int rightcount = 0;
//		int Dcount=0;
//		int i = 0;
//		int len = str.size();
//		while (i < len)
//		{
//			if (str[i] == '(')
//			{
//				leftcount++;
//			}
//			if (str[i] == ')')
//			{
//				if (leftcount == 0)
//				{
//					rightcount++;
//				}
//				else
//				{
//					leftcount--;
//					Dcount++;
//				}
//			}
//			i++;
//		}		
//		cout << Dcount << leftcount << rightcount << endl;
//		system("pause");
//		return 0;
//	}
//}

#include<iostream>
#include<stdlib.h>
#include<string>
#include<stack>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int leftcount = 0;
		int rightcount = 0;
		int Dcount = 0;
		int len = str.size();
		stack<char> sc;
		for (int i = 0; i < len; ++i)
		{
			if (str[i] == '(')
			{
				sc.push(str[i]);
			}

			if (str[i] == ')')
			{
				if (sc.top() == '(')
				{
					Dcount++;
					sc.pop();
				}
				else
				{
					sc.push(str[i]);
				}
			}
		}

		for (int i = 0; i < sc.size(); ++i)
		{
			if (sc.top() == '(')
			{
				leftcount++;
			}
			if (sc.top() == ')')
			{
				rightcount++;
			}
		}
		cout << Dcount <<' ' << leftcount<<' ' << rightcount << endl;
		system("pause");
		return 0;
	}
}