#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		for (int i = str.size() - 1; i >= 0; --i)
		{
			cout << str[i];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}