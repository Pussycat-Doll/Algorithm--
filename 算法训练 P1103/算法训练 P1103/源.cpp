#define _CRT_SECURE_NO_WARNINGS 1
/*�㷨ѵ�� P1103  
���ʵ��
     �������������㡣������������ �� �������ǵ����㹫ʽΪ��
     Ҫ�󣺣�1������һ���ṹ������������������
����       ��2������֮��ļӷ����������˷��ͳ����ֱ��ò��õĺ�����ʵ�֡�
����       ��3������ʹ�ýṹ��ָ��ķ����Ѻ����ļ��������ء�
     ˵�����û����룺�������(+,-,*,/) a b c d.
     �����a+bi�����ʱ����a,b��С��0�����0�����ø�ʽ��������ʱa,b��������λ��

���룺
- 2.5 3.6 1.5 4.9
�����
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