/*��������
���� ����n��ʮ��������������������Ƕ�Ӧ�İ˽�������
�����ʽ
���� ����ĵ�һ��Ϊһ��������n ��1<=n<=10����
���� ������n�У�ÿ��һ����0~9����д��ĸA~F��ɵ��ַ�������ʾҪת����ʮ��������������ÿ��ʮ�����������Ȳ�����100000��
�����ʽ
���� ���n�У�ÿ��Ϊ�����Ӧ�İ˽�����������
��ע�⡿
     �����ʮ��������������ǰ��0������012A��
���� ����İ˽�����Ҳ������ǰ��0��
��������
2
39
123ABC
�������
71
4435274
����ʾ��
�Ƚ�ʮ��������ת����ĳ������������ĳ������ת���ɰ˽��ơ�*/
//�Ƚ�ʮ��������ת���ɶ�������������ĳ������ת���ɰ˽���
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
		string Hex;//���16�����ַ���
		string Octal;//��Ŷ�Ӧ�˽����ַ���
		string Binary;//��Ŷ�Ӧ�������ַ���
		cin >> Hex;
		for (int begin = 0; begin < Hex.length(); ++begin)//ʮ������ת��Ϊ�˽���
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
		for (int i = 0; i < Binary.size(); i+=3)//������ת��Ϊ�˽��ƣ�0~7
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