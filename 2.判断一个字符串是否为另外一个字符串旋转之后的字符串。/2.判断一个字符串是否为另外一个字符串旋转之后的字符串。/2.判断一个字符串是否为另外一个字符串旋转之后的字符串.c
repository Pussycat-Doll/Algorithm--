#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate_String(char str[])//����һ���֡�
{
	char temp = str[0];
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		str[i] = str[i + 1];
	}
	str[len - 1] = temp;
}

int compare_Str(char str1[], char str2[])
{
	int len = strlen(str1);
	int k = 0;
	if (strcmp(str1, str2) == 0)
	{
		printf("%s �� %s ����0���ַ���õ���\n", str2, str1);
		return 0;
	}
	else
	{
		while (len)
		{
			rotate_String(str2);
			k++;
			if (strcmp(str1, str2) == 0)
			{
				printf("%s��%s����%d���ַ���õ���\n", str2, str1, k);
				return 0;
			}
			len--;
		}
		printf("%s����%s��ת֮��õ���\n", str2, str1);
		return 0;
	}
}
int main()
{
	char str1[100];
	char str2[100];
	gets(str1);
	gets(str2);
	compare_Str(str1, str2);
	system("pause");
	return 0;
}