#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"
int main()
{
	Date d1(2019,8,2);
	cout << "d1 的日期为：";
	d1.print();
	Date d2 = d1.operator-(400);
	cout << "d2 的日期为：";
	d2.print();
	Date d3 = d1.operator+(400);
	cout << "d3 的日期为：";
	d3.print();

	Date d4(2018, 7, 3);
	cout << d1.operator<(d4) << endl;
	cout << d1.operator>(d4) << endl;
	cout << d1.operator==(d4) << endl;
	cout << d1.operator<=(d4) << endl;
	cout << d1.operator>=(d4) << endl;
	cout << d1.operator!=(d4) << endl;

	Date d5(2019, 8, 2);
	Date d8(2019, 8, 2);
	Date d6;
	Date d7;
	Date d9;
	d6 = d5.operator-=(99);
	d7 = d5.operator+=(99);
	d9 = d8.operator+=(99);
	cout << "d5 的日期为：";
	d5.print();

	cout << "d6 的日期为：";
	d6.print();

	cout << "d7 的日期为：";
	d7.print();

	cout << "d9 的日期为：";
	d9.print();

	system("pause");
	return 0;
}
