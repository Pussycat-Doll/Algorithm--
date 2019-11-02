#define _CRT_SECURE_NO_WARNINGS 1
/*12.基础练习 01字串  
问题描述
     对于长度为5位的一个01串，每一位都可能是0或1，一共有32种可能。它们的前几个是：
00000
00001
00010
00011
00100
     请按从小到大的顺序输出这32种01串。
输入格式
     本试题没有输入。
输出格式
     输出32行，按从小到大的顺序每行一个长度为5的01串。
样例输出
00000
00001
00010
00011
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
void print(list<int> l)
{
	list<int> ::iterator it = l.begin();
	while (it != l.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
}
int main()
{
	int num = 0;
	for (int i = 0; i <= 1; ++i)
	{
		for (int j = 0; j <= 1; ++j)
		{
			for (int k = 0; k <= 1; ++k)
			{
				for (int a = 0; a <= 1; ++a)
				{
					for (int b = 0; b <= 1; ++b)
					{
						list<int> l;
						l.push_back(i);
						l.push_back(j);
						l.push_back(k);
						l.push_back(a);
						l.push_back(b);
						print(l);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}