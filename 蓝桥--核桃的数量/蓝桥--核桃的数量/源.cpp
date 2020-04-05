/*
题目描述
小张是软件项目经理，他带领3个开发组。工期紧，今天都在加班呢。为鼓舞士气，小张打算给每个组发一袋核桃
（据传言能补脑）。他的要求是：
1.  各组的核桃数量必须相同
2.  各组内必须能平分核桃（当然是不能打碎的）
3.  尽量提供满足1,2条件的最小数量（节约闹革命嘛）

输入
输入包含三个正整数a,  b,  c，表示每个组正在加班的人数，用空格分开（a,b,c< 30）
输出
输出一个正整数，表示每袋核桃的数量。
样例输入
2 4 5
样例输出
20
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(int a,int b)//最大公约数
{
	int c = 1;
	while (c)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = 1;
	int num = (a * b) / func(max(a, b), min(a, b));
	num = (num * c) / func(max(num, c), min(num, c));
	cout << num << endl;
	return 0;
}