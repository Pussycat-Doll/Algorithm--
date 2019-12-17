#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	LTDataType _data;
	struct ListNode* _prev;
	struct ListNode* _next;
}ListNode;
typedef struct List
{
	ListNode* _head;
}List;

ListNode* BuyNode(LTDataType x);//创建一个新的结点

void ListInit(List* plt);//初始化
void ListDestory(List* plt);//销毁

void ListPushBack(List* plt, LTDataType x);//尾插
void ListPushFront(List* plt, LTDataType x);//头插

void ListPopBack(List* plt);//尾删
void ListPopFront(List* plt);//头删

ListNode* ListFind(List* plt,LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);//在Pos位置的前面插入x
void ListErase(ListNode* pos);//删除Pos位置的结点

void ListPrint(List* plt);//打印链表
