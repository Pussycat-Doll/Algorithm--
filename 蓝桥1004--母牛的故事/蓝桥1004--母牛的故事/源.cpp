/*有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？

输入
输入数据由多个测试实例组成，每个测试实例占一行，包括一个整数n(0<n<55)，n的含义如题目中描述。
n=0表示输入数据的结束，不做处理。

输出
对于每个测试实例，输出在第n年的时候母牛的数量。
每个输出占一行。

样例输入
2
4
5
0
样例输出
2
4
6*/
#include<iostream>
using namespace std; 
/*
递归方程： f(n) = n;               n <= 4
           f(n) = f(n-1) + f(n-3); n > 4
*/
int birth(int n)
{
	int arr[55] = { 0 };
	for (int i = 1; i < 55; ++i)
	{
		if (i <= 4)
			arr[i] = i;
		else
			arr[i] = arr[i - 1] + arr[i - 3];
	}
	return arr[n];
}
int main()
{
	int n;
	while (cin >> n && n != 0)
	{
		cout << birth(n) << endl;
	}
	return 0;
}