在vivo产线上，每位职工随着对手机加工流程认识的熟悉和经验的增加，日产量也会不断攀升。
假设第一天量产1台，接下来2天(即第二、三天)每天量产2件，接下来3天(即第四、五、六天)每天量产3件 ... ...
以此类推，请编程计算出第n天总共可以量产的手机数量。

输入
11
输出
35
说明
第11天工人总共可以量产的手机数量

class Solution {
public:
	/**
	*
	* @param n int整型 第n天
	* @return int整型
	*/
	int solution(int n) {
		// write code here
		int i = 0, sum = 0, sumday = 0;
		while (sumday<n)
		{
			i++;
			sumday += i;
		}
		int p = i;
		while (i>0)
		{
			sum += i*i;
			i--;
		}

		sum -= (sumday - n)*p;
		return sum;
	}
};