#define _CRT_SECURE_NO_WARNINGS 1
#include"List.h"

ListNode* BuyNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->_data = x;
	newnode->_next = NULL;
	newnode->_prev = NULL;

	return newnode;
}

void ListInit(List* plt)//初始化
{
	assert(plt);
	ListNode* head = BuyNode(0);
	head->_next = head;
	head->_prev = head;
	plt->_head = head;
}

void ListDestory(List* plt);//销毁

void ListPushBack(List* plt, LTDataType x)//尾插
{
	assert(plt);
	ListNode* newnode = BuyNode(x);
	ListNode* head = plt->_head;
	ListNode* tail = head->_prev;

	newnode->_prev = tail;
	newnode->_next = head;

	tail->_next = newnode;
	head->_prev = newnode;
}
void ListPushFront(List* plt, LTDataType x)//头插
{
	assert(plt);
	ListNode* newnode = BuyNode(x);
	ListNode* head = plt->_head;
	ListNode* first = head->_next;

	newnode->_prev = head;
	newnode->_next = first;

	head->_next = newnode;
	first->_prev = newnode;
}
void ListPopBack(List* plt)//尾删
{
	assert(plt);
	//ListNode* head = plt->_head;
	//assert(head->_next != head);
	//ListNode* tail = head->_prev;

	//tail->_prev->_next = head;
	//head->_prev = tail->_prev;

	//free(tail);
	ListErase(plt->_head->_prev);
}
void ListPopFront(List* plt)//头删
{
	assert(plt);
	//ListNode* head = plt->_head;
	//if (head->_next != NULL)
	//{
	//	ListNode* first = head->_next;
	//	ListNode* second = first->_next;
	//	head->_next = second;
	//	second->_prev = head;
	//	free(first);
	//}
	ListErase(plt->_head->_next);
}

ListNode* ListFind(List* plt, LTDataType x)
{
	assert(plt);
	ListNode* head = plt->_head;
	ListNode* cur = head->_next;
	while (cur != head)
	{
		if (x == cur->_data)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}
void ListInsert(ListNode* pos, LTDataType x)//在Pos位置的前面插入x
{
	assert(pos);
	ListNode* newnode = BuyNode(x);
	ListNode* prev = pos->_prev;
	
	newnode->_next = pos;
	newnode->_prev = prev;
	prev->_next = newnode;
	pos->_prev = newnode;
}

void ListErase(ListNode* pos)//删除Pos位置的结点
{
	assert(pos);
	ListNode* prev = pos->_prev;
	ListNode* next = pos->_next;
	
	prev->_next = next;
	next->_prev = prev;
	free(pos);
}

void ListPrint(List* plt)//打印链表
{
	assert(plt);
	ListNode* head = plt->_head;
	ListNode* cur = head->_next;
	printf("head<===>");
	while (cur != head)
	{
		printf("%d<===>", cur->_data);
		cur = cur->_next;
	}
	printf("head\n");
}