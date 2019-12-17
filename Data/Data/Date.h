#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;

class Date
{
	int _year;
	int _month;
	int _day;

public:
	Date(int year = 1900,int month = 01,int day = 01)//全缺省的构造函数
	{
		if (year >= 1900 && 
			month > 0 && 
			month < 13 &&
			day > 0 &&
			day <= GetMonthDay(year, month))//判断传入的值是否合法
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "您输入的日期不在正常范围内，请重新输入：" << endl;
		}
	}
	int GetMonthDay(int year, int month)//返回每个月的天数。
	{
		static int month_day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && (year % 4 == 0 || year % 400 == 0))//判断是否为闰年
		{
			month_day[2] = 29;
			return 29;
		}
		return month_day[month];
	}
	Date& operator = (const Date& d)//重载赋值
	{
		if (*this != d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	bool operator<(const Date& d)//重载小于
	{
		if (_year == d._year && _month == d._month && _day < d._day)
			return true;
		else if (_year == d._year && _month < d._month)
		{
			return true;
		}
		else if (_year < d._year)
		{
			return true;
		}
		return false;
	}
	bool operator==(const Date& d)
	{
		if (_year == d._year && _month == d._month && _day == d._day)
			return true;
		return false;
	}
	bool operator>(const Date& d)
	{
		if (!(*this <= d))
			return true;
		return false;
	}
	bool operator<=(const Date& d)
	{
		//return operator<(d) || operator==(d);
		return *this < d || *this == d;
	}
	bool operator>=(const Date& d)
	{
		return !(*this < d);
	}
	
	bool operator!=(const Date& d)
	{
		if (!(*this == d))
			return true;
		return false;
	}

	// d + 100 注意：天数加满月加一，月数加满年加一
	Date operator-(int day)//-a相当于+(-a)
	{
		Date d = *this;
		d = d + (-day);
		return d;
	}
	Date operator+=(int day)
	{
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			_day -= GetMonthDay(_year, _month);
			if (_month == 13)
			{
				_month = 1;
				_year++;
			}
			else
			{
				_month++;
			}
		}
		return *this;
	}
	Date operator+(int day)
	{
		Date d = *this;
		d += day;
		return d;
	}
	Date operator-=(int day)
	{
		
		return *this;
	}
		//2019 08 05  计算两个日期之差
		//2019 05 11      (31 + 30 + 31 - 6)

		//2019 05 01      (31 + 30 + 31 + 4)
	int operator-(const Date& d)//计算两个日期之间的间隔天数
	{
		if (_year == d._year && _month == d._month )
		{
			return abs(_day - d._day);
		}
		else if (_year == d._year)
		{
			int max_month = 0;
			int min_month = 0;
			int dif = 0;
			if (_month > d._month)
			{
				max_month = _month;
				min_month = d._month;
				dif = _day - d._day;
			}
			else
			{
				max_month = d._month;
				min_month = _month;
				dif = d._day - _day;
			}
			while ( min_month < max_month )
			{
				dif += GetMonthDay(_year, min_month);
				min_month++;
			}
			return dif;
		}
	}

	// ++d d.operator++(&d)
	Date operator++()
	{
		Date d = *this;
		if (_day == GetMonthDay(_year,_month))
		{
			_day = 1;
			_month++;
		}
		return d;
	}
	// d++ d.operator++(&d, 0)
	Date operator++(int)
	{
		if (_day == GetMonthDay(_year, _month))
		{
			_day = 1;
			_month++;
		}
		return *this;
	}
	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
};
