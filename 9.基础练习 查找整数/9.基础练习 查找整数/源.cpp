#define _CRT_SECURE_NO_WARNINGS 1
/* 9.������ϰ ��������  
��������
     ����һ������n�����������У�������a�������еĵ�һ�γ����ǵڼ�����
�����ʽ
     ��һ�а���һ������n��
     �ڶ��а���n���Ǹ�������Ϊ���������У������е�ÿ������������10000��
     �����а���һ������a��Ϊ�����ҵ�����
�����ʽ
     ���a�������г����ˣ��������һ�γ��ֵ�λ��(λ�ô�1��ʼ���)���������-1��
��������
6
1 9 4 8 3 9
9
�������
2
���ݹ�ģ��Լ��
1 <= n <= 1000��
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
int main()
{
	int num;
	cin >> num;
	list<int> l;
	while (num)
	{
		int x;
		cin >> x;
		l.push_back(x);
		num--;
	}
	int flag;
	cin >> flag;
	int i = 1;
	int is = 0;
	list<int>::iterator it = l.begin();
	while (it != l.end())
	{
		if (*it == flag)
		{
			is = 1;
			cout << i << endl;
			break;
		}
		else
		{
			++it;
			++i;
		}
	}
	if (is == 0)
		cout << "-1" << endl;
	system("pause");
	return 0;
}
