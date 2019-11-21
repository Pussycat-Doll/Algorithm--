#define _CRT_SECURE_NO_WARNINGS 1
/*题目描述
请编写一个函数（允许增加子函数），计算n x m的棋盘格子（n为横向的格子数，m为竖向的格子数）
沿着各自边缘线从左上角走到右下角，总共有多少种走法，要求不能走回头路，即：只能往右和往下走，不能往左和往上走。
输入描述:
输入两个正整数

输出描述:
返回结果

示例1
输入
2
2
输出
6*/
#include<iostream>
using namespace std;
int road_num(int m, int n)
{
	if ((m > 1 && n == 1) || (m == 1 && n > 1))
		return m + n;
	else if (m > 1 && n > 1)
		return road_num(m - 1, n) + road_num(m, n - 1);
	else
		return 0;
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << road_num(m, n) << endl;
	system("pause");
	return 0;
}