#define _CRT_SECURE_NO_WARNINGS 1
// write your code here cpp
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
char Switch (char ch)
{
	if (ch >= 'F' && ch <= 'Z')
		ch -= 5;
	else
	{
		switch (ch)
		{
		case 'A':
			ch = 'V';
			break;
		case 'B':
			ch = 'W';
			break;
		case 'C':
			ch = 'X';
			break;
		case 'D':
			ch = 'Y';
			break;
		case 'E':
			ch = 'Z';
			break;
		default:
			break;
		}
	}
	return ch;
}
int main()
{
	string cryptograph;
	while (getline(cin, cryptograph))
	{
		for (size_t i = 0; i < cryptograph.size(); ++i)
		{
			cout << Switch(cryptograph[i]);
		}
		cout << endl;
	}
	system("pause");
	return 0;
}