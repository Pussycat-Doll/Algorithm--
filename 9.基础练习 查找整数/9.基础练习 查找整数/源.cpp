#define _CRT_SECURE_NO_WARNINGS 1
/* 9.基础练习 查找整数  
问题描述
     给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个。
输入格式
     第一行包含一个整数n。
     第二行包含n个非负整数，为给定的数列，数列中的每个数都不大于10000。
     第三行包含一个整数a，为待查找的数。
输出格式
     如果a在数列中出现了，输出它第一次出现的位置(位置从1开始编号)，否则输出-1。
样例输入
6
1 9 4 8 3 9
9
样例输出
2
数据规模与约定
1 <= n <= 1000。
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
int main()
{
	int num;
	cin >> num;
	list<int> l;
	while (num)
	{
		int x;
		cin >> x;
		l.push_back(x);
		num--;
	}
	int flag;
	cin >> flag;
	int i = 1;
	int is = 0;
	list<int>::iterator it = l.begin();
	while (it != l.end())
	{
		if (*it == flag)
		{
			is = 1;
			cout << i << endl;
			break;
		}
		else
		{
			++it;
			++i;
		}
	}
	if (is == 0)
		cout << "-1" << endl;
	system("pause");
	return 0;
}
