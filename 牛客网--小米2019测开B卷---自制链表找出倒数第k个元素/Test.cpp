�ҳ����������е�һ���ڵ㣬�ýڵ㵽βָ��ľ���ΪK������ĵ�����0�����Ϊ�����βָ�롣Ҫ��ʱ�临�Ӷ�ΪO(n)��
�����㶨�����£�
struct ListNode
{
	int m_nKey;
	ListNode* m_pNext;
}
����ڵ��ֵ��ʼ��Ϊ1��2��3��4��5��6��7��

�������� :
�ýڵ㵽βָ��ľ���K


������� :
���ظõ�������ĵ�����K���ڵ㣬����ڵ��ֵ
ʾ��1
����
2
���
6

��ע:
���Ծ�ʵ��һ��������1��7���μ�������Ȼ����Ѱ�ҵ�����K���ڵ㡣Ҫ��ӽڵ����ҽڵ�Ĳ������ӶȾ�ΪO(n)��

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