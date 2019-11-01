#define _CRT_SECURE_NO_WARNINGS 1
/* 5.基础练习 特殊回文数  
问题描述
     123321是一个非常特殊的数，它从左边读和从右边读是一样的。
　　 输入一个正整数n， 编程求所有这样的五位和六位十进制数，满足各位数字之和等于n 。
输入格式
     输入一行，包含一个正整数n。
输出格式
     按从小到大的顺序输出满足条件的整数，每个整数占一行。
样例输入
52
样例输出
899998
989989
998899
数据规模和约定
1<=n<=54。
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;

void print(list<int> l)
{
	list<int>::iterator it = l.begin();
	while (it != l.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
}
int main()
{
	int key = 0;
	cin >> key;

	for (int i = 0; i <= 9; ++i)//寻找五位回文
	{
		for (int j = 0; j <= 9; ++j)
		{
			for (int k = 0; k <= 9; ++k)
			{
				if ((i + j) * 2 + k == key)
				{
					list<int> l1;
					l1.push_back(i);
					l1.push_back(j);
					l1.push_back(k);
					l1.push_back(j);
					l1.push_back(i);
					print(l1);
				}
			}
		}
	}
	for (int i = 0; i <= 9; ++i)//寻找五位回文
	{
		for (int j = 0; j <= 9; ++j)
		{
			for (int k = 0; k <= 9; ++k)
			{
				if ((i + j + k) * 2 == key)
				{
					list<int> l2;
					l2.push_back(i);
					l2.push_back(j);
					l2.push_back(k);
					l2.push_back(k);
					l2.push_back(j);
					l2.push_back(i);
					print(l2);
				}
			}
		}
	}
	system("pause");
	return 0;
}