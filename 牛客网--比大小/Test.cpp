����һ���������飬����һ�����顣�÷��������е�i������Ϊ��ԭ�����е�i��λ�õ��������������߶��ٲ�������������������֡�
��������������Ѿ��������ҵ�λ�ã�����Ϊ - 1��


�������� :
����Ϊ���У���һ��Ϊһ������N��1��N��106

������һ����N�У�ÿһ��Ϊһ������M��0��M��232 - 1



������� :
	 ��� N �У�ÿ��һ�����ֱ�ʾת��֮�������

	 ʾ��1

	 ����
	 5
	 91
	 10
	 3
	 22
	 40

	 ���
	 - 1
	 2
	 1
	 1
	 - 1

#include <iostream>
#include <stack>
using namespace std;

const int MAXN = 1000005;
int num[MAXN];
int des[MAXN];

int main()
{
	int n;
	cin >> n;
	stack<int> vt;
	for (int i = 0; i<n; ++i)
	{
		cin >> num[i];
		des[i] = -1;
	}
	int index = 0;
	while (index<n)
	{
		if (!vt.empty() && num[vt.top()]<num[index])
		{
			int cur = vt.top();
			vt.pop();
			des[cur] = index - cur;
		}
		else
		{
			vt.push(index);
			index++;
		}
	}
	for (int i = 0; i<n; ++i)
	{
		cout << des[i] << endl;
	}
	return 0;
}