//��Ŀ�������������������ܳ���˳��͵����յ�˳���������յ����ʼ˳����ȣ�����ǰ�ߵ��ˣ�����Ի�ý�����

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