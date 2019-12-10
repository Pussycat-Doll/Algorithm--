#define _CRT_SECURE_NO_WARNINGS 1
/*链接：https://www.nowcoder.com/questionTerminal/5a304c109a544aef9b583dce23f5f5db
来源：牛客网

一个数组有 N 个元素，求连续子数组的最大和。 例如：[-1,2,1]，和最大的连续子数组为[2,1]，其和为 3

输入描述:
输入为两行。 第一行一个整数n(1 <= n <= 100000)，表示一共有n个元素 第二行为n个数，
即每个元素,每个整数都在32位int范围内。以空格分隔。

输出描述:
所有连续子数组中和最大的值。
示例1
输入
3 -1 2 1
输出
3*/
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
//int main()
//{
//	vector<int> l = {-1,-2,-3,-4,-5,-6};
//	int num,x;
//	cin >> num;
//	while (num--)
//	{
//		cin >> x;
//		l.push_back(x);
//	}
//	int max = -10000;
//	int end = 0;
//	int start = 0;
//	int sum = 0;
//	for (size_t i = 0; i < l.size(); ++i)
//	{
//		end = i;
//		while (end < l.size())
//		{
//			start = i;
//			while (start <= end)
//			{
//				sum += l[start];
//				++start;
//			}
//			if (sum > max)
//				max = sum;
//			sum = 0;
//			++end;
//		}
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}

int Max(int a, int b)
{
	return a > b ? a : b;
}
int get_max(vector<int> l)
{
	int sum = l[0];
	int max = l[0];
	for (size_t i = 0; i < l.size(); ++i)
	{
		sum = Max(sum + l[i], l[i]);//动态规划状态方程 
		max = Max(sum, max);
	}
	return max;
}
int main()
{
	vector<int> l;
	int num, x;
	cin >> num;
	while (num--)
	{
		cin >> x;
		l.push_back(x);
	}
	cout << get_max(l) << endl;
	system("pause");     
	return 0;
}
