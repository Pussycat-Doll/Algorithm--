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

ListNode* BuyNode(LTDataType x);//����һ���µĽ��

void ListInit(List* plt);//��ʼ��
void ListDestory(List* plt);//����

void ListPushBack(List* plt, LTDataType x);//β��
void ListPushFront(List* plt, LTDataType x);//ͷ��

void ListPopBack(List* plt);//βɾ
void ListPopFront(List* plt);//ͷɾ

ListNode* ListFind(List* plt,LTDataType x);
void ListInsert(ListNode* pos, LTDataType x);//��Posλ�õ�ǰ�����x
void ListErase(ListNode* pos);//ɾ��Posλ�õĽ��

void ListPrint(List* plt);//��ӡ����
