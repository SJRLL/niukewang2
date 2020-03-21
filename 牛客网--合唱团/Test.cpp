�� n ��ѧ��վ��һ�ţ�ÿ��ѧ����һ������ֵ��ţţ����� n ��ѧ���а���˳��ѡȡ k ��ѧ����
Ҫ����������ѧ����λ�ñ�ŵĲ���� d��ʹ���� k ��ѧ��������ֵ�ĳ˻�������ܷ������ĳ˻���

�������� :
ÿ��������� 1 ������������ÿ���������ݵĵ�һ�а���һ������ n(1 <= n <= 50)����ʾѧ���ĸ�������������һ�У�
���� n ����������˳���ʾÿ��ѧ��������ֵ ai�� - 50 <= ai <= 50������������һ�а�������������k �� d(1 <= k <= 10, 1 <= d <= 50)��


������� :
���һ�б�ʾ���ĳ˻���
ʾ��1
//���룺
3
7 4 7
2 50

//�����
49

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i<n; ++i)
	{
		cin >> v[i];
	}
	int k, d;
	cin >> k >> d;
	vector<vector<long long>> min_dp(n, vector<long long>(k + 1, 0));
	vector<vector<long long>> max_dp(n, vector<long long>(k + 1, 0));
	for (int i = 0; i<n; ++i)
	{
		max_dp[i][1] = v[i];
		min_dp[i][1] = v[i];
	}
	for (int i = 0; i<n; ++i)
	{
		for (int j = 2; j <= k; ++j)
		{
			for (int m = max(0, i - d); m <= i - 1; ++m)
			{
				max_dp[i][j] = max(max_dp[i][j], max(max_dp[m][j - 1] * v[i], min_dp[m][j - 1] * v[i]));
				min_dp[i][j] = min(min_dp[i][j], min(min_dp[m][j - 1] * v[i], max_dp[m][j - 1] * v[i]));
			}
		}
	}
	long long max_value = max_dp[k - 1][k];
	for (int i = k; i<n; ++i)
	{
		max_value = max(max_value, max_dp[i][k]);
	}
	cout << max_value << endl;

}