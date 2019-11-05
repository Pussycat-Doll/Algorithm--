#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void rotate_String(char str[])//左旋一个字。
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
		printf("%s 是 %s 左旋0个字符后得到的\n", str2, str1);
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
				printf("%s是%s左旋%d个字符后得到的\n", str2, str1, k);
				return 0;
			}
			len--;
		}
		printf("%s不是%s旋转之后得到的\n", str2, str1);
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