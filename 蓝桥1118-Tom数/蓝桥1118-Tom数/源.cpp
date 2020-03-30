/*
题目描述
正整数的各位数字之和被Tom称为Tom数。求输入数（<2^32）的Tom数!

输入
每行一个整数(<2^32).

输出
每行一个输出,对应该数的各位数之和.

样例输入
12345
56123
82
样例输出
15
17
10*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*int num;
	while (cin >> num)
	{
		int sum = 0;
		while (num)
		{
			sum += num % 10;
			num /= 10;
		}
		cout << sum << endl;;
	}	*/
	string str;
	while (cin >> str)
	{
		int sum = 0;
		for (auto e : str)
		{
			sum += (e - '0');
		}
		cout << sum << endl;
	}
	return 0;
}