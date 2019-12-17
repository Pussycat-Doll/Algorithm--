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

BTNode* BinaryTreeCreat(BTDatatype* a, int* pi);//创建一棵二叉树
void BinaryTreeDetory(BTNode* root);//销毁二叉树

int BinaryTreeSize(BTNode* root);//返回二叉树的结点个数
int BinaryLeaveSize(BTNode* root);//返回二叉树的叶子个数
int BinaryLeaveKSize(BTNode* root,int k);//返回二叉树第 K 层的结点个数

BTNode* BinaryTreeFind(BTNode* root,BTDatatype x);//返回二叉树中某一个值为 X 的结点

void BinaryTreePrevOrder(BTNode* root);//前序遍历
void BinaryTreeInOrder(BTNode* root);//中序遍历
void BinaryTreePostOrder(BTNode* root);//后序遍历


void BinaryTreeLevelOrder(BTNode* root);//层序遍历二叉树
bool BinaryTreeComplete(BTNode* root);//判断二叉树是否为完全二叉树

void TestBinaryTree();
