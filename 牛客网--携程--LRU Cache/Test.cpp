设计一个数据结构，实现LRU Cache的功能(Least Recently Used – 最近最少使用缓存)。它支持如下2个操作： get 和 put。

int get(int key) – 如果key已存在，则返回key对应的值value（始终大于0）；如果key不存在，则返回 - 1。
void put(int key, int value) – 如果key不存在，将value插入；如果key已存在，则使用value替换原先已经存在的值。
如果容量达到了限制，LRU Cache需要在插入新元素之前，将最近最少使用的元素删除。

请特别注意“使用”的定义：新插入或获取key视为被使用一次；而将已经存在的值替换更新，不算被使用。

限制：请在O(1)的时间复杂度内完成上述2个操作。

输入描述 :
第一行读入一个整数n，表示LRU Cache的容量限制。 从第二行开始一直到文件末尾，每1行代表1个操作。

如果每行的第1个字符是p，则该字符后面会跟随2个整数，表示put操作的key和value。

如果每行的第1个字符是g，则该字符后面会跟随1个整数，表示get操作的key。


输出描述 :
按照输入中get操作出现的顺序，按行输出get操作的返回结果。
示例1
输入
2
p 1 1
p 2 2
g 1
p 2 102
p 3 3
g 1
g 2
g 3
输出
1
1
- 1
3
说明
2        //Cache容量为2
p 1 1    //put(1, 1)
p 2 2    //put(2, 2)
g 1      //get(1), 返回1
p 2 102  //put(2, 102)，更新已存在的key，不算被使用
p 3 3    //put(3, 3)，容量超过限制，将最近最少使用的key=2清除
g 1      //get(1), 返回1
g 2      //get(2), 返回-1
g 3      //get(3), 返回3

//解题思路：采用(hashmap+双向链表的思路)，因为双向链表的插入和hashmap的查询复杂度均为O(1),是符合题目要求的。

put操作：
        如果k存在，则个更新v即可，若不存在，
        如果不存在k，就需要先考虑链表lp是否满了，若未满，则将其插入双向链表的前端，若已经满了。 则删除链表末尾元素，将其插入链表头部。更新map

get操作：如果map出现了相应的k值，则直接返回其map对应的value即可，同时lp链表中的对应的k和value提升到链表首部(对应的是题目中“使用”说明)，更新map。
         如未出现，返回-1
        
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