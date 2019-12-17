#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

void ListTest1()
{
	List s1;
	ListInit(&s1);
	ListPushBack(&s1, 2);
	ListPushBack(&s1, 3);
	ListPushBack(&s1, 4);
	ListPushFront(&s1, 1);
	ListPushFront(&s1, 0);
	ListPrint(&s1);
}

void ListTest2()
{
	List s2;
	ListInit(&s2);
	ListPushBack(&s2, 2);
	ListPushBack(&s2, 3);
	ListPushBack(&s2, 4);
	ListPushFront(&s2, 1);
	ListPushFront(&s2, 0);

	ListPopBack(&s2);
	ListPopFront(&s2);
	ListPrint(&s2);
}

void ListTest3()
{
	List s3;
	ListInit(&s3);
	ListPushBack(&s3, 2);
	ListPushBack(&s3, 3);
	ListPushBack(&s3, 4);
	ListPushFront(&s3, 1);
	ListPushFront(&s3, 0);
	ListNode* pos = ListFind(&s3, 2);
	ListInsert(pos, 99);
	ListPrint(&s3);
	ListErase(pos);
	ListPrint(&s3);
}
int main()
{
	ListTest1();
	ListTest2();
	ListTest3();
	system("pause");
	return 0;
}