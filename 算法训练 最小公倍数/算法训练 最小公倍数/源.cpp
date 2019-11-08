#define _CRT_SECURE_NO_WARNINGS 1
/*算法训练 最小公倍数  
问题描述
     编写一函数lcm，求两个正整数的最小公倍数。
样例输入
     一个满足题目要求的输入范例。
例：
3 5
样例输出
15
数据规模和约定
输入数据中每一个数的范围。
例：两个数都小于65536。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int gcd(int a, int b)//最大公约数
{
	int max = a;
	int min = b;
	int temp = 0;
	if (b > max)
	{
		max = b;
		min = a;
	}
	while (min != 0)//辗转相除法
	{
		temp = max % min;
		max = min;
		min = temp;
	}
	return max;
}
int lcm(int a, int b)
{
	return (a*b) / gcd(a, b);
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << lcm(a, b)<< endl;
	system("pause");
	return 0;
}