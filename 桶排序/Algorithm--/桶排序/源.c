#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int array[] = { 0, 1, 4, 4, 5, 6, 7, 3, 2, 5, 9, 8, 7, 8, 2 };
	int lenth = sizeof(array) / sizeof(array[0]);
	printf("%d\n", lenth);
	int arr[15] = {0};
	for (int i = 0; i < lenth; ++i)
	{
		int temp = array[i];
		for (int j = 0; j < lenth; ++j)
		{
			if (temp == array[j])
				arr[temp]++;
		}
	}
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] != 0)
			printf("%d ", i);
	}
	printf("\n");
	system("pause");
	return 0;
}
