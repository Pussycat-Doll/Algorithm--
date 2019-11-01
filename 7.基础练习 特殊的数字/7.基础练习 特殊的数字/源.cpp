#define _CRT_SECURE_NO_WARNINGS 1
/*7.基础练习 特殊的数字  
问题描述
     153是一个非常特殊的数，它等于它的每位数字的立方和，即153=1*1*1+5*5*5+3*3*3。
编程求所有满足这种条件的三位十进制数。
输出格式
     按从小到大的顺序输出满足条件的三位十进制数，每个数占一行。
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	for (int i = 100; i <= 999; ++i)
	{
		int num = i;
		int key = 0;
		while (num)
		{
			key += pow((num % 10), 3);
			num /= 10;
		}
		if (key == i)
			cout << i << endl;
	}
	system("pause");
	return 0;
}
