#define _CRT_SECURE_NO_WARNINGS 1
/*11.������ϰ ��ĸͼ��  
��������
     ������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
     ����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�
�����ʽ
     ����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
�����ʽ
     ���n�У�ÿ��m���ַ���Ϊ���ͼ�Ρ�
��������
5 7
�������
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
���ݹ�ģ��Լ��
1 <= n, m <= 26��
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
char func(int m, int n)
{
	if (m == 1 || n == 1)
	{
		int add = abs(m - n);
		return  'A' + add;
	}
	else
	{
		return func(m - 1, n - 1);
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
			cout << func(i, j);
		cout << endl;
	}
	system("pause");
	return 0;
}
