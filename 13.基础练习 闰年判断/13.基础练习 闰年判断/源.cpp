#define _CRT_SECURE_NO_WARNINGS 1
/*
		13.������ϰ �����ж�
		��������
		����һ����ݣ��ж���һ���ǲ������ꡣ
		���������֮һ����ʱ����һ�������꣺
		
		��������ݶ��������ꡣ
		�����ʽ
		�������һ������y����ʾ��ǰ����ݡ�
		�����ʽ
		���һ�У������������������꣬�����yes���������no��
		��˵����
		������ָ�������һ���ַ�����Ϊ��������籾���yes����no������Ҫ�ϸ��������и����Ĵ�Сд��д���Сд�����÷֡�
		��������
		2013
		�������
		no
		��������
		2016
		�������
		yes
		���ݹ�ģ��Լ��
		1990 <= y <= 2050��
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
//1. �����4�ı���������100�ı�����
//2. �����400�ı�����
bool is_leapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return true;
	else
		return false;
}
int main()
{
	int year;
	while (cin >> year)
	{
		if (is_leapyear(year))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	system("pause");
	return 0;
}

