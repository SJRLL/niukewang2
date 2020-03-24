1.题目描述
对输入的字符串进行排序后输出
输入描述 :
输入有两行，第一行n

第二行是n个空格隔开的字符串
输出描述 :
输出一行排序后的字符串，空格隔开，无结尾空格
示例1

输入

5
c d a bb e

输出

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

2.题目描述
对输入的字符串进行排序后输出
输入描述 :
多个测试用例，每个测试用例一行。

每行通过空格隔开，有n个字符，n＜100
输出描述 :
对于每组测试用例，输出一行排序过的字符串，每个字符串通过空格隔开
示例1
输入

a c bb
f dddd
nowcoder

输出

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

3.题目描述
对输入的字符串进行排序后输出
输入描述 :
多个测试用例，每个测试用例一行。
每行通过, 隔开，有n个字符，n＜100
输出描述 :
对于每组用例输出一行排序后的字符串，用','隔开，无结尾空格
示例1

输入

a, c, bb
f, dddd
nowcoder

输出

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