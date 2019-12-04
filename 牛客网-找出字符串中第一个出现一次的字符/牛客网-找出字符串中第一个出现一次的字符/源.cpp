#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str ;
	while (cin >> str)
	{
		int arr[95] = { 0 };
		int flag = 0;
		for (size_t i = 0; i < str.size(); ++i)
		{
			arr[str[i] - ' ']++;
		}
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (arr[str[i] - ' '] == 1)
			{
				flag = 1;
				cout << str[i] << endl;
				break;
			}
		}
		if (flag == 0)
			cout << "-1" << endl;
	}
	system("pause");
	return 0;
}