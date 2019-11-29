#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int sum = 0;
	int num;
	int prev = 0;
	for (size_t i = 0; i < str.size(); ++i)
	{
		switch (str[i])
		{
		case 'I':
			num = 1;
			break;
		case 'V':
			num = 5;
			break;
		case 'X':
			num = 10;
			break;
		case 'L':
			num = 50;
			break;
		case 'C':
			num = 100;
			break;
		case 'D':
			num = 500;
			break;
		case 'M':
			num = 1000;
			break;
		default:
			break;
		}
		if (prev == 1 && (num == 5 || num == 10 || num == 50 || num == 100))
			num = num - prev*2;
		if (prev == 100 && (num == 500 || num == 1000))
			num = num - prev*2;
		sum += num;
		prev = num;
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
