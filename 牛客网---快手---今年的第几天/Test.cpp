#include<iostream>
#include<stdlib.h>
using namespace std;

bool IsLeapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return true;
	}
	return false;
}

int GetyearDay(int year, int month, int day)
{
	int Montsumhday[13] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	int Monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sumday = 0;

	sumday += Montsumhday[month];
	sumday = sumday - (Monthday[month] - day);
	if (IsLeapyear(year))
	{
		sumday += 1;
	}
	return sumday;
}

int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	cout << GetyearDay(year, month, day);
	system("pause");
	return 0;
}