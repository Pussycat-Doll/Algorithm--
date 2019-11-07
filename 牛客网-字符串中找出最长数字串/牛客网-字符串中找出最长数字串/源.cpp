#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int max_str = 0;
	int start = 0;
	int end = 0;
	int num = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			num++;
			i++;
		}
		if (num > max_str)
		{
			max_str = num;
			end = i - 1;
			start = end - num + 1;
		}
		num = 0;
	}
	while (start <= end)
	{
		cout << str[start];
		++start;
	}
	cout << endl;
	system("pause");
	return 0;
}
