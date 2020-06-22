/*
��Ŀ����: ��˹�ռ�
    ����ѧ�Ҹ�˹�и���ϰ�ߣ�������ζ�Ҫ���ռǡ�
    �����ռ��и����ڲ�ͬ�ĵط������Ӳ�ע�������գ�������һ���������棬���磺4210
    ��������֪�����Ǹ������������ڣ�����ʾ��һ���Ǹ�˹������ĵڼ��졣�����Ҳ�Ǹ���ϰ�ߣ�
	��ʱʱ�̿����������ˣ������ֹ�ȥһ�죬���ж���ʱ����������˷��أ�
    ��˹�����ڣ�1777��4��30�ա�    
    �ڸ�˹���ֵ�һ����Ҫ������ռ��ϱ�ע�ţ�5343����˿���������ǣ�1791��12��15�ա�
    ��˹��ò�ʿѧλ�������ռ��ϱ��ţ�8113   
    ���������˹��ò�ʿѧλ�������ա�
�ύ�𰸵ĸ�ʽ�ǣ�yyyy-mm-dd, ���磺1980-03-21
���ϸ��ո�ʽ��ͨ��������ύ�𰸡�
ע�⣺ֻ�ύ������ڣ���Ҫд�����������ݣ����磺˵���Ե����֡�   1799-07-16*/
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
