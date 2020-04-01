有一批订单记录，数据有订单号，入店时间，离店时间；
输入一个时间值A，需要在这批记录中找到符合入离店时间范围（A大于等于入店时间，并且A小于等于离店时间）内的所有记录。
单次查询时间复杂度控制在O(logN)
※注意：订单号升序输出

输入描述 :
记录数：10
时间值A：20180602
订单号 入店时间 离店时间
1001 20180103 20180105
1002 20180202 20180203
1003 20180304 20180306
1004 20180401 20180408
1005 20180501 20180504
1006 20180601 20180604
1007 20180705 20180706
1008 20180801 20180804
1009 20180903 20180903
1010 20181003 20181003
以上输入都为整型


输出描述 :

1006
示例1

输入
10
20180602
1001 20180103 20180105
1002 20180202 20180203
1003 20180304 20180306
1004 20180401 20180408
1005 20180501 20180504
1006 20180601 20180604
1007 20180705 20180706
1008 20180801 20180804
1009 20180903 20180903
1010 20181003 20181003

输出
1006

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int A;
	cin >> A;
	vector<int>num(n), r(n), c(n), res;
	for (int i = 0; i<n; ++i)
	{
		cin >> num[i] >> r[i] >> c[i];
		if (A >= r[i] && A <= c[i])
		{
			res.push_back(num[i]);
		}
	}
	if (res.size() == 0)
	{
		cout << "null" << endl;
	}
	else
	{
		sort(res.begin(), res.end());
		for (int i = 0; i<res.size(); ++i)
		{
			cout << res[i] << endl;
		}
	}
	return 0;

}