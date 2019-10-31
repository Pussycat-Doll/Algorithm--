#define _CRT_SECURE_NO_WARNINGS 1
/*4.基础练习 十进制转十六进制  
问题描述
     十六进制数是在程序设计时经常要使用到的一种整数的表示方式。它有 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F共16个符号，分别表示十进制数的0至15。十六进制的计数方法是满16进1，所以十进制数16在十六进制中是10，而十进制的17在十六进制中是11，以此类推，十进制的30在十六进制中是1E。
     给出一个非负整数，将它表示成十六进制的形式。
输入格式
     输入包含一个非负整数a，表示要转换的数。0<=a<=2147483647
输出格式
     输出这个整数的16进制表示
样例输入
30
样例输出
1E
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int Deci = 0;
	string Hex;
	cin >> Deci;
	int num = 0;
	while (Deci)
	{
		num = Deci % 16;
		Deci /= 16;
		switch (num)
		{
		case 0:
			Hex.insert(Hex.begin(), '0');
			break;
		case 1:
			Hex.insert(Hex.begin(), '1');
			break;
		case 2:
			Hex.insert(Hex.begin(), '2');
			break;
		case 3:
			Hex.insert(Hex.begin(), '3');
			break;
		case 4:
			Hex.insert(Hex.begin(), '4');
			break;
		case 5:
			Hex.insert(Hex.begin(), '5');
			break;
		case 6:
			Hex.insert(Hex.begin(), '6');
			break;
		case 7:
			Hex.insert(Hex.begin(), '7');
			break;
		case 8:
			Hex.insert(Hex.begin(), '8');
			break;
		case 9:
			Hex.insert(Hex.begin(), '9');
			break;
		case 10:
			Hex.insert(Hex.begin(), 'A');
			break;
		case 11:
			Hex.insert(Hex.begin(), 'B');
			break;
		case 12:
			Hex.insert(Hex.begin(), 'C');
			break;
		case 13:
			Hex.insert(Hex.begin(), 'D');
			break;
		case 14:
			Hex.insert(Hex.begin(), 'E');
			break;
		case 15:
			Hex.insert(Hex.begin(), 'F');
			break;
		}

	}
	cout << Hex.c_str() << endl;
	system("pause");
	return 0;
}