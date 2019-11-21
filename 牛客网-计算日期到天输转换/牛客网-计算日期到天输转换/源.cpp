#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int get_monthday(int year, int month)
{
	int day[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		day[2] = 29;
	switch (month)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return day[month];
		default:
			break;
	}
}
int main()
{
	int _year;
	int _month;
	int _day;
	cin >> _year >> _month >> _day;
	int sum = 0;
	for (int i = 1; i < _month; ++i)
	{
		sum += get_monthday(_year, i);
	}
	sum += _day;
	cout << sum << endl;
	system("pause");
	return 0;
}