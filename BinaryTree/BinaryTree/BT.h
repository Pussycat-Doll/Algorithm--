#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<malloc.h>

typedef char BTDatatype;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode*_left;
	struct BinaryTreeNode*_right;
	BTDatatype _data;
}BTNode;

BTNode* BinaryTreeCreat(BTDatatype* a, int* pi);//����һ�ö�����
void BinaryTreeDetory(BTNode* root);//���ٶ�����

int BinaryTreeSize(BTNode* root);//���ض������Ľ�����
int BinaryLeaveSize(BTNode* root);//���ض�������Ҷ�Ӹ���
int BinaryLeaveKSize(BTNode* root,int k);//���ض������� K ��Ľ�����

BTNode* BinaryTreeFind(BTNode* root,BTDatatype x);//���ض�������ĳһ��ֵΪ X �Ľ��

void BinaryTreePrevOrder(BTNode* root);//ǰ�����
void BinaryTreeInOrder(BTNode* root);//�������
void BinaryTreePostOrder(BTNode* root);//�������


void BinaryTreeLevelOrder(BTNode* root);//�������������
bool BinaryTreeComplete(BTNode* root);//�ж϶������Ƿ�Ϊ��ȫ������

void TestBinaryTree();
