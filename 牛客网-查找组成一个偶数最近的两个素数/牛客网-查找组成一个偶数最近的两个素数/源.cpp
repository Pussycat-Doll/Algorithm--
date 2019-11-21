#define _CRT_SECURE_NO_WARNINGS 1
/*任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，本题目要求输出组成指定偶数的两个素数
差值最小的素数对
输入描述:
输入一个偶数

输出描述:
输出两个素数

示例1
输入
复制
20
输出
复制
7
13*/
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
bool prime_num(int num)
{
	for (int i = 2; i < num; ++i)
	{
		if (num % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int num = 20;
	cin >> num;
	int min = num;
	int differ;
	for (int i = 1; i < num; ++i)
	{
		int num1 = i;
		int num2 = num - i;
		if (prime_num(num1) && prime_num(num2))
		{
			differ = abs(num1-num2);
			if (min > differ)
				min = differ;
		}
	}
	cout << (num - min) / 2 << endl << (min + num) / 2 << endl;
	system("pause");
	return 0;
}