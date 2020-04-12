//#include<iostream>
//#include<stdlib.h>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int k, n;
//	cin >> k >> n;
//	int dp[3][3] ;
//	for (int i = 0; i<n; ++i)
//	{
//		for (int j = 0; j<n; ++j)
//		{
//			cin >> dp[i][j];
//		}
//	}
//
//	vector<int> v;
//	for (int i = 0; i<n; ++i)
//	{
//		for (int j = 0; j<n; ++j)
//		{
//			v.push_back(dp[i][j]);
//		}
//	}
//	sort(v.begin(), v.end());
//	int len = v.size();
//	for (int i = len - 1; i > len - 1 - k; --i)
//	{
//		cout << v[i] << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include<stdlib.h>
//using namespace std;
//
//int main(){
//	int x = 0;
//	vector<vector<int>> vec;
//	vector<int> v;
//	while (cin >> x)
//	{
//		v.push_back(x);
//		if (cin.get() == '\n')
//		{
//			vec.push_back(v);
//			v.clear();
//		}
//
//
//		if (cin.peek() == '\n')
//		{
//			vec.push_back(v);
//			break;
//		}
//	}
//
//	cout << "row:" << vec.size() << endl;
//	cout << "col:" << v.size() << endl;
//	cout << "ÑéÖ¤Êä³ö\n";
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < v.size(); j++)
//		{
//			cout << vec[i][j] << " ";
//		}
//	}
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<cstdio>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<vector<int> > data;
//	vector<int> row;
//	int num;
//	bool flag = true;
//	while (flag)
//	{
//		do
//		{
//			cin >> num;
//			if (!cin)
//			{
//				flag = false;
//				break;
//			}
//			row.push_back(num);
//		} while (cin.get() != '\n');
//		if (flag)
//		{
//			data.push_back(row);
//			row.clear();
//		}
//	}
//	for (int i = 0; i < data.size(); i++)
//	{
//		cout << endl;
//		for (int j = 0; j < data[i].size(); j++)
//		{
//			cout << data[i][j] << " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int main()
{
	int  n;
	cin >> n;
	vector<vector<int>> arr(n, vector<int>());
	for (int i = 0; i < n; i++)
	{
		int number;
		while (cin >> number)
		{
			arr[i].push_back(number);
			if (cin.get() == '\n')
				break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < arr[i].size(); j++)
		{
			cout << arr[i][j]<<' ';
		}
	}
	system("pause");
	return 0;
}
