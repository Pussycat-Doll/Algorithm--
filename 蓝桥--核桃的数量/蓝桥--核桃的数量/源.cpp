/*
��Ŀ����
С���������Ŀ����������3�������顣���ڽ������춼�ڼӰ��ء�Ϊ����ʿ����С�Ŵ����ÿ���鷢һ������
���ݴ����ܲ��ԣ�������Ҫ���ǣ�
1.  ����ĺ�������������ͬ
2.  �����ڱ�����ƽ�ֺ��ң���Ȼ�ǲ��ܴ���ģ�
3.  �����ṩ����1,2��������С��������Լ�ָ����

����
�����������������a,  b,  c����ʾÿ�������ڼӰ���������ÿո�ֿ���a,b,c< 30��
���
���һ������������ʾÿ�����ҵ�������
��������
2 4 5
�������
20
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int func(int a,int b)//���Լ��
{
	int c = 1;
	while (c)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int sum = 1;
	int num = (a * b) / func(max(a, b), min(a, b));
	num = (num * c) / func(max(num, c), min(num, c));
	cout << num << endl;
	return 0;
}