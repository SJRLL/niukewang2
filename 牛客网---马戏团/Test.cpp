搜狐员工小王最近利用假期在外地旅游，在某个小镇碰到一个马戏团表演，
精彩的表演结束后发现团长正和大伙在帐篷前激烈讨论，小王打听了下了解到，
马戏团正打算出一个新节目“最高罗汉塔”，即马戏团员叠罗汉表演。考虑到安全因素，
要求叠罗汉过程中，站在某个人肩上的人应该既比自己矮又比自己瘦，或相等。 
团长想要本次节目中的罗汉塔叠的最高，由于人数众多，正在头疼如何安排人员的问题。小王觉得这个问题很简单，
于是统计了参与最高罗汉塔表演的所有团员的身高体重，并且很快找到叠最高罗汉塔的人员序列。 
现在你手上也拿到了这样一份身高体重表，请找出可以叠出的最高罗汉塔的高度，这份表中马戏团员依次编号为1到N。

输入描述 :
首先一个正整数N，表示人员个数。
之后N行，每行三个数，分别对应马戏团员编号，体重和身高。

6
1 65 100
2 75 80
3 80 100
4 60 95
5 82 101
6 81 70


输出描述 :
正整数m，表示罗汉塔的高度。

4

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct player
{
	int h;
	int w;
};

bool compare(player p1, player p2)
{
	//按体重从小到大排序
	if (p1.w != p2.w)
	{
		return p1.w <= p2.w;
	}
	//相同体重，身高大的在前边
	else
	{
		return p1.h>p2.h;
	}
}

int main()
{
	int n;
	int h;
	int w;
	int index;
	vector<player>v;
	while (cin >> n)
	{
		v.clear();
		for (int i = 0; i<n; ++i)
		{
			player pt;
			cin >> index >> w >> h;
			pt.w = w;
			pt.h = h;
			v.push_back(pt);
		}
		sort(v.begin(), v.end(), compare);
		//按照身高求最大上升子序列
		int dp[n + 1];
		int max = 0;
		dp[0] = 1;
		for (int i = 1; i<n; ++i)
		{
			dp[i] = 1;
			for (int j = 0; j<i; ++j)
			{
				if (v[j].h <= v[i].h && dp[j] + 1>dp[i])
				{
					dp[i] = dp[j] + 1;
				}
			}
		}

		for (int i = 0; i<n; ++i)
		{
			if (max<dp[i])
			{
				max = dp[i];
			}
		}
		cout << max << endl;
	}

}