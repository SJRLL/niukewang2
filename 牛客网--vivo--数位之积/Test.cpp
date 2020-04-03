现给定任意正整数 n，请寻找并输出最小的正整数 m（m>9），使得 m 的各位（个位、十位、百位 ... ...）之乘积等于n，若不存在则输出 - 1。
示例1
输入
36
输出
49
示例2
输入
100
输出
455

class Solution {
public:
	/**
	* 输入一个整形数值，返回一个整形值
	* @param n int整型 n>9
	* @return int整型
	*/
	int solution(int n) {
		// write code here
		string s = "";
		for (int i = 9; i >= 2 && n != 1; --i)
		{
			while (n%i == 0)
			{
				s += ('0' + i);
				n = n / i;
			}
		}
		reverse(s.begin(), s.end());
		return n == 1 ? stoi(s) : -1;
	}
};