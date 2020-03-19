
nowcoder有两盒（A、B）乒乓球，有红双喜的、有亚力亚的……现在他需要判别A盒是否包含了B盒中所有的种类，
并且每种球的数量不少于B盒中的数量，该怎么办呢？

输入描述 :
输入有多组数据。
每组数据包含两个字符串A、B，代表A盒与B盒中的乒乓球，每个乒乓球用一个大写字母表示，即相同类型的乒乓球为相同的大写字母。
字符串长度不大于10000。


输出描述 :
每一组输入对应一行输出：如果B盒中所有球的类型在A中都有，并且每种球的数量都不大于A，则输出“Yes”；否则输出“No”。
示例1
//输入：
ABCDFYE CDE
ABCDGEAS CDECDE

//输出：
Yes
No

//方法一：暴力查找
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

//方法二：利用map<key,value>计算对应字母的出现次数
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