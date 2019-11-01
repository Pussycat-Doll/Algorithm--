#define _CRT_SECURE_NO_WARNINGS 1
/* 6.基础练习 回文数  
问题描述
     1221是一个非常特殊的数，它从左边读和从右边读是一样的，编程求所有这样的四位十进制数。
输出格式
     按从小到大的顺序输出满足条件的四位十进制数。
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
void print(list<int> l)
{
	list<int>::iterator it = l.begin();
	while (it != l.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
}

//int main()
//{
//	for (int i = 1; i <= 9; ++i)
//	{
//		for (int j = 0; j <= 9; ++j)
//		{
//			list<int> l;
//			l.push_back(i);
//			l.push_back(j);
//			l.push_back(j);
//			l.push_back(i);
//			print(l);
//		}
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	for (int i = 1; i<10; i++)
	{
		for (int j = 0; j<10; j++)
		{
			for (int k = 0; k<10; k++)
			{
				for (int l = 1; l<10; l++)
				{
					if (i == l&&j == k) cout << i << j << k << l << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}


