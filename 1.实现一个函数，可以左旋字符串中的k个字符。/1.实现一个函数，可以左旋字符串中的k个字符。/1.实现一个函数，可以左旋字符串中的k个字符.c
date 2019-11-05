#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
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
void move(char str[], int k)
{
	while (k)
	{
		rotate_String(str);
		k--;
	}
	printf("%s\n", str);
}
int main()
{
	char str[100];
	int k = 0;
	gets(str);
	scanf("%d", &k);
	move(str, k);
	system("pause");
	return 0;
}