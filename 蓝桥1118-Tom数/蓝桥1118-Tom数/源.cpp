/*
��Ŀ����
�������ĸ�λ����֮�ͱ�Tom��ΪTom��������������<2^32����Tom��!

����
ÿ��һ������(<2^32).

���
ÿ��һ�����,��Ӧ�����ĸ�λ��֮��.

��������
12345
56123
82
�������
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