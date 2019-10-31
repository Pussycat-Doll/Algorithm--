#define _CRT_SECURE_NO_WARNINGS 1
/* 3.基础练习 十六进制转十进制  
问题描述
从键盘输入一个不超过8位的正的十六进制数字符串，将它转换为正的十进制数后输出。
注：十六进制数中的10~15分别用大写的英文字母A、B、C、D、E、F表示。
样例输入
FFFF
样例输出
65535
*/
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	string Hex;//十六进制
	string Binary;//二进制
	int Deci = 0;//十进制
	cin >> Hex;
	//for (int i = 0; i < Hex.size(); ++i)
	//{
	//	switch (Hex[i])
	//	{
	//		case '0':
	//			Binary += "0000";
	//			break;
	//		case '1':
	//			Binary += "0001";
	//			break;
	//		case '2':
	//			Binary += "0010";
	//			break;
	//		case '3':
	//			Binary += "0011";
	//			break;
	//		case '4':
	//			Binary += "0100";
	//			break;
	//		case '5':
	//			Binary += "0101";
	//			break;
	//		case '6':
	//			Binary += "0110";
	//			break;
	//		case '7':
	//			Binary += "0111";
	//			break;
	//		case '8':
	//			Binary += "1000";
	//			break;
	//		case '9':
	//			Binary += "1001";
	//			break;
	//		case 'A':
	//			Binary += "1010";
	//			break;
	//		case 'B':
	//			Binary += "1011";
	//			break;
	//		case 'C':
	//			Binary += "1100";
	//			break;
	//		case 'D':
	//			Binary += "1101";
	//			break;
	//		case 'E':
	//			Binary += "1110";
	//			break;
	//		case 'F':
	//			Binary += "1111";
	//			break;
	//		default:
	//			break;
	//	}
	//}
	int flag = 1;
	for (int i = Hex.size() - 1; i >= 0; --i)
	{
		if (Hex[i] >= '0' && Hex[i] <= '9')
			Deci += (Hex[i] - '0') * flag;
		else
			Deci += (Hex[i] - 'A' + 10) * flag;
		flag *= 16;
	}
	cout << Deci << endl;
	system("pause");
	return 0;
}