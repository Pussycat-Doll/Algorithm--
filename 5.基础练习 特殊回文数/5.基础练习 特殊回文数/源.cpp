#define _CRT_SECURE_NO_WARNINGS 1
/* 5.������ϰ ���������  
��������
     123321��һ���ǳ����������������߶��ʹ��ұ߶���һ���ġ�
���� ����һ��������n�� �����������������λ����λʮ�������������λ����֮�͵���n ��
�����ʽ
     ����һ�У�����һ��������n��
�����ʽ
     ����С�����˳���������������������ÿ������ռһ�С�
��������
52
�������
899998
989989
998899
���ݹ�ģ��Լ��
1<=n<=54��
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
int main()
{
	int key = 0;
	cin >> key;

	for (int i = 0; i <= 9; ++i)//Ѱ����λ����
	{
		for (int j = 0; j <= 9; ++j)
		{
			for (int k = 0; k <= 9; ++k)
			{
				if ((i + j) * 2 + k == key)
				{
					list<int> l1;
					l1.push_back(i);
					l1.push_back(j);
					l1.push_back(k);
					l1.push_back(j);
					l1.push_back(i);
					print(l1);
				}
			}
		}
	}
	for (int i = 0; i <= 9; ++i)//Ѱ����λ����
	{
		for (int j = 0; j <= 9; ++j)
		{
			for (int k = 0; k <= 9; ++k)
			{
				if ((i + j + k) * 2 == key)
				{
					list<int> l2;
					l2.push_back(i);
					l2.push_back(j);
					l2.push_back(k);
					l2.push_back(k);
					l2.push_back(j);
					l2.push_back(i);
					print(l2);
				}
			}
		}
	}
	system("pause");
	return 0;
}