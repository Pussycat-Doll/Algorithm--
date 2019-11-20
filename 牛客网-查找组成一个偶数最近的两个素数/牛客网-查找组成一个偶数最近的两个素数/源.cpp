#define _CRT_SECURE_NO_WARNINGS 1
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