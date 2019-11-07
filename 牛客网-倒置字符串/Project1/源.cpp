#define _CRT_SECURE_NO_WARNINGS 1
/*将一句话的单词进行倒置，标点不倒置。比如 I like beijing.
经过函数后变为：beijing. like I*/
#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;
void copy(int start, int end, string src, string& dest)
{
	while (start <= end)
	{
		dest.push_back(src[start]);
		++start;
	}
}
int main()
{
	string str;
	getline(cin,str);
	string dest;
	int end = str.size() - 1;
	int start = 0;
	int flag = 0;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		if (str[i] == ' ')
		{
			flag = i;
			start = flag + 1;
			copy(start, end, str, dest);
			dest.push_back(' ');
			end = flag - 1;
		}
		else if (i == 0)
		{
			copy(0, flag - 1, str, dest);
		}
	}
	cout << dest << endl;
	system("pause");
	return 0;
}
