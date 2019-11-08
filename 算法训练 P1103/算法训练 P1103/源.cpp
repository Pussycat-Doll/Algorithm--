#define _CRT_SECURE_NO_WARNINGS 1
/*算法训练 P1103  
编程实现
     两个复数的运算。设有两个复数 和 ，则他们的运算公式为：
     要求：（1）定义一个结构体类型来描述复数。
　　       （2）复数之间的加法、减法、乘法和除法分别用不用的函数来实现。
　　       （3）必须使用结构体指针的方法把函数的计算结果返回。
     说明：用户输入：运算符号(+,-,*,/) a b c d.
     输出：a+bi，输出时不管a,b是小于0或等于0都按该格式输出，输出时a,b都保留两位。

输入：
- 2.5 3.6 1.5 4.9
输出：
1.00 + - 1.30i
*/
#include<stdlib.h>
#include<iostream>
using namespace std;
typedef struct complex_number
{
	double num1;
	double num2;
}complex_number;

void add(complex_number *x1, complex_number *x2)
{
	printf("%.2f + %.2fi\n", x1->num1 + x2->num1, x1->num2 + x2->num2);
}
void minu(complex_number *x1, complex_number *x2)
{
	printf("%.2f + %.2fi\n", x1->num1 - x2->num1, x1->num2 - x2->num2);
}
void multi(complex_number *x1, complex_number *x2)
{
	printf("%.2f + %.2fi\n", x1->num1 * x2->num1, x1->num2 * x2->num2);
}
void devide(complex_number *x1, complex_number *x2)
{
	printf("%.2f + %.2fi\n", x1->num1 / x2->num1, x1->num2 / x2->num2);
}
int main()
{
	char st;
	complex_number a = { 0, 0 };
	complex_number b = { 0, 0 };
	complex_number *x1 = &a;
	complex_number *x2 = &b;
	double xa1,xa2;
	double xb1, xb2;
	cin >> st >> xa1 >> xa2 >> xb1 >> xb2;
	x1->num1 = xa1;
	x1->num2 = xa2;
	x2->num1 = xb1;
	x2->num2 = xb2;
	switch (st)
	{
	case '+':
		add(x1, x2);
		break;
	case '-':
		minu(x1, x2);
		break;
	case '*':
		multi(x1, x2);
		break;
	case '/':
		devide(x1, x2);
		break;
	default:
		break;	
	}
	system("pause");
	return 0;
}