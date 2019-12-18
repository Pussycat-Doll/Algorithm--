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
#include<algorithm>
using namespace std;
int max_sum(vector<int> ve)
{
	int Max = ve[0];
	int sum = ve[0];
	for (size_t i = 1; i < ve.size(); ++i)
	{
		sum = max(sum + ve[i], ve[i]);
		Max = max(sum, Max);
	}
	return Max;
}
int main()
{
	int length = 3;
	while (cin >> length)
	{
		int num;
		vector<int> ve;
		while (length--)
		{
			cin >> num;
			ve.push_back(num);
		}
		cout << max_sum(ve) << endl;
	}
	system("pause");
	return 0;
}