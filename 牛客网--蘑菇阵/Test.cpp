��������������A��B��ס��һƬ����Ģ������n��m��������ɵĲݵأ�A��(1, 1), B��(n, m)��
����A��Ҫ�ݷ�B��������ֻ��ȥB�ļң�����ÿ����ֻ����(i, j + 1)��(i + 1, j)������·�ߣ��ڲݵ�����k��Ģ�����ڸ�����(���Ģ��������ͬһ����), 
�ʣ�A���ÿһ�����ѡ��Ļ�(�����ڱ߽��ϣ���ֻ��һ��ѡ��)����ô��������Ģ���ߵ�B�ļҵĸ����Ƕ��٣�

�������� :
��һ��N��M��K(1 �� N, M �� 20, k �� 100), N, MΪ�ݵش�С��������K�У�ÿ����������x��y������(x, y)����һ��Ģ����


������� :
���һ�У������������(������2λС��)
ʾ��1
����
2 2 1<br / >2 1<br / >
���
0.50

#include <iostream>
#include <iomanip>
#include<cstring>
using namespace std;
int has[25][25];//����Ģ��
double dp[25][25];//�ܹ�����ÿ�����ӵĸ���

int main(){
	int n, m, k;
	while (cin >> n >> m >> k){
		int i, j;
		memset(has, 0, sizeof(has));
		memset(dp, 0, sizeof(dp));
		int x, y;
		for (i = 0; i < k; ++i){
			cin >> x >> y;
			has[x][y] = 1;
		}
		for (i = 1; i <= n; ++i){
			for (j = 1; j <= m; ++j){
				if (i == 1 && j == 1) { dp[1][1] = 1; continue; }
				if (has[i][j]) { dp[i][j] = 0; continue; }
				if (i == n && j == m) { dp[i][j] = dp[i - 1][j] + dp[i][j - 1]; continue; }
				if (i == n) { dp[i][j] = dp[i - 1][j] * 0.5 + dp[i][j - 1]; continue; }
				if (j == m) { dp[i][j] = dp[i - 1][j] + dp[i][j - 1] * 0.5; continue; }
				if (i == 1) { dp[i][j] = dp[i][j - 1] * 0.5; continue; }
				if (j == 1) { dp[i][j] = dp[i - 1][j] * 0.5; continue; }
				dp[i][j] = dp[i][j - 1] * 0.5 + dp[i - 1][j] * 0.5;
			}
		}
		cout << fixed << setprecision(2) << dp[n][m] << endl;
	}
	return 0;
}