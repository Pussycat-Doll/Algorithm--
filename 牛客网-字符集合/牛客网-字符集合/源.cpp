#define _CRT_SECURE_NO_WARNINGS 1
/*输入一个字符串，求出该字符串包含的字符集合
输入描述:
每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
输出描述:
每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
示例1
输入
	abcqweracb
输出
	abcqwer*/
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string str;
	while (cin >> str)
	{
		int array[256] = { 0 };
		for (size_t i = 0; i < str.size(); ++i)
		{
			if (array[str[i]] == 0)
			{
				cout << str[i];
				array[str[i]] = 1;
			}	
		}
		cout << endl;
	}
	system("pause");
	return 0;
}