/*问题描述
　　 给定n个十六进制正整数，输出它们对应的八进制数。
输入格式
　　 输入的第一行为一个正整数n （1<=n<=10）。
　　 接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。
输出格式
　　 输出n行，每行为输入对应的八进制正整数。
【注意】
     输入的十六进制数不会有前导0，比如012A。
　　 输出的八进制数也不能有前导0。
样例输入
2
39
123ABC
样例输出
71
4435274
【提示】
先将十六进制数转换成某进制数，再由某进制数转换成八进制。*/
//先将十六进制数转换成二进制数，再由某进制数转换成八进制
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		string Hex;//存放16进制字符串
		string Octal;//存放对应八进制字符串
		string Binary;//存放对应二进制字符串
		cin >> Hex;
		for (int begin = 0; begin < Hex.length(); ++begin)//十六进制转换为八进制
		{
			switch (Hex[begin])
			{
			case '0':
				Binary += "0000";
				break;
			case '1':
				Binary += "0001";
				break;
			case '2':
				Binary += "0010";
				break;
			case '3':
				Binary += "0011";
				break;
			case '4':
				Binary += "0100";
				break;
			case '5':
				Binary += "0101";
				break;
			case '6':
				Binary += "0110";
				break;
			case '7':
				Binary += "0111";
				break;
			case '8': 
				Binary += "1000"; 
				break;
			case '9': 
				Binary += "1001"; 
				break;
			case 'A': 
				Binary += "1010"; 
				break;
			case 'B': 
				Binary += "1011"; 
				break;
			case 'C': 
				Binary += "1100"; 
				break;
			case 'D': 
				Binary += "1101"; 
				break;
			case 'E': 
				Binary += "1110"; 
				break;
			case 'F': 
				Binary += "1111"; 
				break;
			default:
				break;
			}
		}
		int zero2 = 3 - Binary.size() % 3;
		if (zero2 == 1)
			Binary.insert(Binary.begin(), '0'); 
		else if (zero2 == 2)
		{
			Binary.insert(Binary.begin(), '0');
			Binary.insert(Binary.begin(), '0');
		}
		for (int i = 0; i < Binary.size(); i+=3)//二进制转换为八进制：0~7
		{
			int one = 4*(Binary[i] - '0') + 2*(Binary[i+1] - '0') + (Binary[i+2] - '0');
			Octal += (one + '0');
		}
		int start = 0;
		while (Octal[start] == '0')
		{
			++start;
		}
		for (start; start < Octal.size(); ++start)
		{
			cout << Octal[start];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}