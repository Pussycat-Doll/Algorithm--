#define _CRT_SECURE_NO_WARNINGS 1
/* 6.������ϰ ������  
��������
     1221��һ���ǳ����������������߶��ʹ��ұ߶���һ���ģ������������������λʮ��������
�����ʽ
     ����С�����˳�����������������λʮ��������
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


