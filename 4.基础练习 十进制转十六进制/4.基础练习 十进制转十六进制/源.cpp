#define _CRT_SECURE_NO_WARNINGS 1
/*4.������ϰ ʮ����תʮ������  
��������
     ʮ�����������ڳ������ʱ����Ҫʹ�õ���һ�������ı�ʾ��ʽ������ 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F��16�����ţ��ֱ��ʾʮ��������0��15��ʮ�����Ƶļ�����������16��1������ʮ������16��ʮ����������10����ʮ���Ƶ�17��ʮ����������11���Դ����ƣ�ʮ���Ƶ�30��ʮ����������1E��
     ����һ���Ǹ�������������ʾ��ʮ�����Ƶ���ʽ��
�����ʽ
     �������һ���Ǹ�����a����ʾҪת��������0<=a<=2147483647
�����ʽ
     ������������16���Ʊ�ʾ
��������
30
�������
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