//题目描述：给出若干人赛跑出发顺序和到达终点顺序，若到达终点和起始顺序相比，超过前边的人，则可以获得奖励；

#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	vector<int> begin(n);
	vector<int> end(n);

	for (int i = 0; i < n; ++i)
	{
		cin>>begin[i];
	}
	for (int j = 0; j < n; ++j)
	{
		cin >> end[j];
	}

	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (begin[i] == end[n - 1])
		{
			count = n - 1 - i;
			break;
		}
	}
	cout << count << endl;
	
	system("pause");
	return 0;
}