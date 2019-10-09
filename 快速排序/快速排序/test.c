#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//从小到大排序

void swap(int* x1, int* x2)
{
	int temp = *x1;
	*x1 = *x2;
	*x2 = temp;
}

int QuickSortPart1(int* arr, int left,int right)//左右指针法
{
	int key = arr[right];
	int keyindex = right;
	while (left < right)
	{
		while (left < right && arr[left] <= key)
		//左指针找比Key大的数
		{
			++left;
		}
		while (left < right && arr[right] >= key)
		//右指针找比Key小的数
		{
			--right;
		}
		if (left < right)
		{
			swap(&arr[left], &arr[right]);
			++left;
			--right;
		}
	}
	swap(&arr[left], &arr[keyindex]);
	return left;
}

int QuickSortPart2(int* arr, int left, int right)//挖坑法
{
	int key = arr[right];
	while (left < right)
	{
		while (left < right && arr[left] <= key)//左边找大，放到右边的坑。
		{
			++left;
		}
		arr[right] = arr[left];
		while (left < right && arr[right] >= key)//右边找小，放到左边的坑。
		{
			--right;
		}
		arr[left] = arr[right];
	}
	arr[right] = key;
	return left;
}
void QuickSort(int* arr, int left, int right)
{
	if (left >= right)
		return;
	//int keyindex = QuickSortPart1(arr, left, right);
	int keyindex = QuickSortPart2(arr, left, right);
	//[left,keyindex-1] key [keyindex+1,right]
	QuickSort(arr, left, keyindex - 1);
	QuickSort(arr, keyindex + 1, right);
}
void print(int* arr, int len)
{
	for (int i = 0; i < len; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int a[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	print(a, sizeof(a) / sizeof(a[0]));
	QuickSort(a, 0, sizeof(a)/sizeof(a[0])-1);
	print(a, sizeof(a) / sizeof(a[0]));
	system("pause");
	return 0;
}
