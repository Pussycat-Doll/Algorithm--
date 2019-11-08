#define _CRT_SECURE_NO_WARNINGS 1
/*16.算法训练 递归求二项式系数值  
问题描述
 
样例输入
    一个满足题目要求的输入范例。
3 10
样例输出
120

数据规模和约定
输入数据中每一个数的范围。
例：结果在int表示时不会溢出。
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int func(int m, int n)
{
	int result = 0;
	if (m == 0 || m == n)
		return 1;
	else if (0 < m && m < n)
		return func(m, n - 1) + func(m - 1, n - 1);
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << func(m, n) << endl;
	system("pause");
	return 0;
}