//题目描述
//对字符串中的所有单词进行倒排。
//说明：
//1、每个单词是以26个大写或小写英文字母构成；
//2、非构成单词的字符均视为单词间隔符；
//3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
//4、每个单词最长20个字母；
//
//输入描述 :
//输入一行以空格来分隔的句子
//
//输出描述 :
//输出句子的逆序
//
//示例1
//输入
//I am a student
//
//输出
//student a am I


#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string s;
	while (getline(cin, s))
	{
		//在字符串最后添加一个空格，便于进行对字符串结束的判断(从平时编写matlab中获得的启发，所以，编程语言是相通的，哈哈)
		vector<string> res;
		string s_temp;
		for (int i = 0; i <s.size(); i++)
		{
			if (s[i] >= 'a'&&s[i] <= 'z' || s[i] >= 'A'&&s[i] <= 'Z')
			{
				s_temp += s[i];
				if ((s[i + 1]< 'A') || (s[i + 1] >'Z'&&s[i + 1] <'a') || (s[i + 1] >'z'))
				{
					res.push_back(s_temp);
					s_temp.clear();
				}
			}
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			cout << res[i] << " ";
		}
		cout<< endl;
	}
	system("pause");
	return 0;
}
