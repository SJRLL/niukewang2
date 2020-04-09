以字符串的形式读入两个数字，再以字符串的形式输出两个数字的和。

输入描述 :
输入两行，表示两个数字a和b， - 109 <= a, b <= 109  ，用双引号括起。


输出描述 :
输出a + b的值，用双引号括起。
示例1
输入

"-26"
"100"

输出
"74"

#include<stdio.h>
int main()
{
	long  a, b;
	char c;
	scanf("\"%d\"", &a);
	c = getchar();
	scanf("\"%d\"", &b);
	printf("\"%d\"", a + b);
	return 0;
}