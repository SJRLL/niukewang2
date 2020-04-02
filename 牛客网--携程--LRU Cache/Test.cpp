���һ�����ݽṹ��ʵ��LRU Cache�Ĺ���(Least Recently Used �C �������ʹ�û���)����֧������2�������� get �� put��

int get(int key) �C ���key�Ѵ��ڣ��򷵻�key��Ӧ��ֵvalue��ʼ�մ���0�������key�����ڣ��򷵻� - 1��
void put(int key, int value) �C ���key�����ڣ���value���룻���key�Ѵ��ڣ���ʹ��value�滻ԭ���Ѿ����ڵ�ֵ��
��������ﵽ�����ƣ�LRU Cache��Ҫ�ڲ�����Ԫ��֮ǰ�����������ʹ�õ�Ԫ��ɾ����

���ر�ע�⡰ʹ�á��Ķ��壺�²�����ȡkey��Ϊ��ʹ��һ�Σ������Ѿ����ڵ�ֵ�滻���£����㱻ʹ�á�

���ƣ�����O(1)��ʱ�临�Ӷ����������2��������

�������� :
��һ�ж���һ������n����ʾLRU Cache���������ơ� �ӵڶ��п�ʼһֱ���ļ�ĩβ��ÿ1�д���1��������

���ÿ�еĵ�1���ַ���p������ַ���������2����������ʾput������key��value��

���ÿ�еĵ�1���ַ���g������ַ���������1����������ʾget������key��


������� :
����������get�������ֵ�˳�򣬰������get�����ķ��ؽ����
ʾ��1
����
2
p 1 1
p 2 2
g 1
p 2 102
p 3 3
g 1
g 2
g 3
���
1
1
- 1
3
˵��
2        //Cache����Ϊ2
p 1 1    //put(1, 1)
p 2 2    //put(2, 2)
g 1      //get(1), ����1
p 2 102  //put(2, 102)�������Ѵ��ڵ�key�����㱻ʹ��
p 3 3    //put(3, 3)�������������ƣ����������ʹ�õ�key=2���
g 1      //get(1), ����1
g 2      //get(2), ����-1
g 3      //get(3), ����3

//����˼·������(hashmap+˫�������˼·)����Ϊ˫������Ĳ����hashmap�Ĳ�ѯ���ӶȾ�ΪO(1),�Ƿ�����ĿҪ��ġ�

put������
        ���k���ڣ��������v���ɣ��������ڣ�
        ���������k������Ҫ�ȿ�������lp�Ƿ����ˣ���δ�����������˫�������ǰ�ˣ����Ѿ����ˡ� ��ɾ������ĩβԪ�أ������������ͷ��������map

get���������map��������Ӧ��kֵ����ֱ�ӷ�����map��Ӧ��value���ɣ�ͬʱlp�����еĶ�Ӧ��k��value�����������ײ�(��Ӧ������Ŀ�С�ʹ�á�˵��)������map��
         ��δ���֣�����-1
        
#include <iostream>
#include <unordered_map>
#include <list>
#include <utility>
using namespace std;

typedef unordered_map<int, list<pair<int, int>>::iterator> hashmap;
list<pair<int, int>> lp;

hashmap map;
int capacity;

int get(int k)
{
	auto it = map.find(k);
	if (it == map.end())
	{
		return -1;
	}
	int res = it->second->second;
	lp.erase(it->second);
	lp.push_front(make_pair(k, res));
	map[k] = lp.begin();
	return res;
}

void put(int k, int v)
{
	auto it = map.find(k);
	if (it != map.end())
	{
		it->second->second = v;
	}
	else
	{
		if (lp.size() == capacity)
		{
			int key = lp.back().first;
			lp.pop_back();
			map.erase(key);
		}
		lp.push_front(make_pair(k, v));
		map[k] = lp.begin();
	}
}

int main()
{
	int k, v;
	char c;
	cin >> capacity;
	while (cin >> c)
	{
		if (c == 'p')
		{
			cin >> k >> v;
			if (capacity <= 0) continue;
			put(k, v);
		}
		if (c == 'g')
		{
			cin >> k;
			cout << get(k) << endl;
		}
	}
	return 0;
}