找出单向链表中的一个节点，该节点到尾指针的距离为K。链表的倒数第0个结点为链表的尾指针。要求时间复杂度为O(n)。
链表结点定义如下：
struct ListNode
{
	int m_nKey;
	ListNode* m_pNext;
}
链表节点的值初始化为1，2，3，4，5，6，7。

输入描述 :
该节点到尾指针的距离K


输出描述 :
返回该单向链表的倒数第K个节点，输出节点的值
示例1
输入
2
输出
6

备注:
请自觉实现一个链表，将1到7依次加入链表，然后再寻找倒数第K个节点。要求加节点与找节点的操作复杂度均为O(n)。

#include<bits/stdc++.h>
using namespace std;
struct ListNode {
	int m_nKey;
	ListNode* m_pNext;
	ListNode(int x) : m_nKey(x), m_pNext(NULL) {}
};
int main()
{
	ListNode* head = new ListNode(1);
	ListNode* p = head, *q = head;
	for (int i = 2; i <= 7; ++i)
	{
		ListNode* node = new ListNode(i);
		p->m_pNext = node;
		p = node;
	}

	int k;
	cin >> k;
	int step = 0;
	p = head;
	q = head;
	while (step<k)
	{
		q = q->m_pNext;
		step++;
	}
	while (q)
	{
		q = q->m_pNext;
		p = p->m_pNext;
	}
	cout << p->m_nKey << endl;
	return 0;
}