#define _CRT_SECURE_NO_WARNINGS 1
/*11.基础练习 字母图形  
问题描述
     利用字母可以组成一些美丽的图形，下面给出了一个例子：
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
     这是一个5行7列的图形，请找出这个图形的规律，并输出一个n行m列的图形。
输入格式
     输入一行，包含两个整数n和m，分别表示你要输出的图形的行数的列数。
输出格式
     输出n行，每个m个字符，为你的图形。
样例输入
5 7
样例输出
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
数据规模与约定
1 <= n, m <= 26。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
char func(int m, int n)
{
	if (m == 1 || n == 1)
	{
		int add = abs(m - n);
		return  'A' + add;
	}
	else
	{
		return func(m - 1, n - 1);
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
			cout << func(i, j);
		cout << endl;
	}
	system("pause");
	return 0;
}
