#define _CRT_SECURE_NO_WARNINGS 1
/*7.������ϰ ���������  
��������
     153��һ���ǳ��������������������ÿλ���ֵ������ͣ���153=1*1*1+5*5*5+3*3*3��
�������������������������λʮ��������
�����ʽ
     ����С�����˳�����������������λʮ��������ÿ����ռһ�С�
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	for (int i = 100; i <= 999; ++i)
	{
		int num = i;
		int key = 0;
		while (num)
		{
			key += pow((num % 10), 3);
			num /= 10;
		}
		if (key == i)
			cout << i << endl;
	}
	system("pause");
	return 0;
}
