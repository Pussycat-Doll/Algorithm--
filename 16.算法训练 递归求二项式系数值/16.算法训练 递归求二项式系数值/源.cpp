#define _CRT_SECURE_NO_WARNINGS 1
/*16.�㷨ѵ�� �ݹ������ʽϵ��ֵ  
��������
 
��������
    һ��������ĿҪ������뷶����
3 10
�������
120

���ݹ�ģ��Լ��
����������ÿһ�����ķ�Χ��
���������int��ʾʱ���������
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int func(int m, int n)
{
	int result = 0;
	if (m == 0 || m == n)
		return 1;
	else if (0 < m && m < n)
		return func(m, n - 1) + func(m - 1, n - 1);
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << func(m, n) << endl;
	system("pause");
	return 0;
}