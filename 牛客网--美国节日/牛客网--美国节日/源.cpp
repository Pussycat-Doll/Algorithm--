/*和中国的节日不同，美国的节假日通常是选择某个月的第几个星期几这种形式，因此每一年的放假日期都不相同。
具体规则如下：

1月1日：元旦
1月的第三个星期一：马丁·路德·金纪念日
2月的第三个星期一：总统节
5月的最后一个星期一：阵亡将士纪念日
7月4日：美国国庆
9月的第一个星期一：劳动节
11月的第四个星期四：感恩节
12月25日：圣诞节
现在给出一个年份，请你帮忙生成当年节日的日期。
输入描述:
输入包含多组数据，每组数据包含一个正整数year（2000≤year≤9999）。

输出描述:

对应每一组数据，以“YYYY-MM-DD”格式输出当年所有的节日日期，每个日期占一行。
每组数据之后输出一个空行作为分隔。
*/
#include<iostream>
using namespace std;
int getweek(int year, int month, int week,int order)
{
	int wk = (1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
	if( wk == 0)
		wk = 7;
	int day;
	if (wk > week)
		day = 1 + (wk - week) + 1;
	else
		day = 1 + (week - wk);
	int time = 1;
	while (time < order)
	{
		day += 7;
		++time;
	}
	return day;
}
int main()
{
	int year;
	cin >> year;
	cout << year << "-01-01" << endl;
	printf("%d-01-%02d\n", year, getweek(year, 1, 1, 3));
	printf("%d-02-%02d\n", year, getweek(year, 2, 1, 3));
	printf("%d-05-%02d\n", year, getweek(year, 5, 1, 3));
	cout << year << "-07-04" << endl;
	printf("%d-09-%02d\n", year, getweek(year, 9, 4, 1));
	printf("%d-11-%02d\n", year, getweek(year, 11, 4, 3));
	cout << year << "-12-25" << endl<<endl;
	return 0;
}