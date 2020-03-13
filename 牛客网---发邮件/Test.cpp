//题目描述：
NowCoder每天要给很多人发邮件。有一天他发现发错了邮件，把发给A的邮件发给了B，
把发给B的邮件发给了A。于是他就思考，要给n个人发邮件，在每个人仅收到1封邮件的情况下，
有多少种情况是所有人都收到了错误的邮件？
即没有人收到属于自己的邮件。

//输入:
2
3

//输出：
1
2


//解题思路：
当n个编号元素放在n个编号位置，元素编号与位置编号各不对应的方法数用D(n)表示，
那么D(n - 1)就表示n - 1个编号元素放在n - 1个编号位置，各不对应的方法数，其它类推.
第一步，把第n个元素放在一个位置，比如位置k，一共有n - 1种方法；
第二步，放编号为k的元素，这时有两种情况：⑴把它放到位置n，
那么，对于剩下的n - 1个元素，由于第k个元素放到了位置n，剩下n - 2个元素就有D(n - 2)种方法；
⑵第k个元素不把它放到位置n，这时，对于这n - 1个元素，有D(n - 1)种方法；
综上得到
D(n) = (n - 1)[D(n - 2) + D(n - 1)]
特殊地，D(1) = 0, D(2) = 1.


// write your code here cpp
#include<iostream>
using namespace std;

long int Failrecve(int n)
{
	if (n<2)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	if (n == 3)
	{
		return 2;
	}
	return (n - 1)*(Failrecve(n - 1) + Failrecve(n - 2));
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << Failrecve(n) << endl;
	}
	return 0;
}