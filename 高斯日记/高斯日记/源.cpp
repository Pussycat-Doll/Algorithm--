/*
题目标题: 高斯日记
    大数学家高斯有个好习惯：无论如何都要记日记。
    他的日记有个与众不同的地方，他从不注明年月日，而是用一个整数代替，比如：4210
    后来人们知道，那个整数就是日期，它表示那一天是高斯出生后的第几天。这或许也是个好习惯，
	它时时刻刻提醒着主人：日子又过去一天，还有多少时光可以用于浪费呢？
    高斯出生于：1777年4月30日。    
    在高斯发现的一个重要定理的日记上标注着：5343，因此可算出那天是：1791年12月15日。
    高斯获得博士学位的那天日记上标着：8113   
    请你算出高斯获得博士学位的年月日。
提交答案的格式是：yyyy-mm-dd, 例如：1980-03-21
请严格按照格式，通过浏览器提交答案。
注意：只提交这个日期，不要写其它附加内容，比如：说明性的文字。   1799-07-16*/
#include<iostream>
#include<cstdlib>
using namespace std;
class Date
{
public:
	Date(int year, int month, int day)
		:_year(year), _month(month), _day(day)
	{}
	bool leap_year()
	{
		if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0))
			return true;
		else
			return false;
	}
	int get_monthday()
	{
		int arr[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		switch (_month)
		{
		case 1:
			return arr[1];
		case 2:
			if (leap_year())
				return 29;
			else
				return arr[2];
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
			return arr[_month];
		default:
			break;
		}
	}
	void later_date(int days)
	{
			while (_day + days >get_monthday() && days != 0)
			{
				days -= get_monthday();
				++_month;
				if (_month == 13)
				{
					_month = 1;
					_year++;
				}
			}
				cout << _year << "-" << _month << "-" << _day + days - 1<< endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Date  Mr_Gao(1777, 4, 30);
	Mr_Gao.later_date(8113);
	system("pause");
	return 0;
}
