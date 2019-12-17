#define _CRT_SECURE_NO_WARNINGS 1
#include"BT.h"
#include"queue.h"


void BinaryTreeLevelOrder(BTNode* root)//层序遍历二叉树
{
	Queue q;
	QueueInit(&q);
	if (root != NULL)
		QueuePush(&q, root);

	while (!Queueempty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%c ", front->_data);
		QueuePop(&q);
		if (front->_left)
			QueuePush(&q, front->_left);
		if (front->_right)
			QueuePush(&q, front->_right);
	}
}

bool BinaryTreeComplete(BTNode* root)//判断二叉树是否为完全二叉树
//出队时若为 NULL，队里剩余的都应该为 NULL
{
	Queue q;
	if (root != NULL)
		QueuePush(&q, root);

	while (!Queueempty(&q))
	{
		QueuePush(&q, root->_left);
		QueuePush(&q, root->_right);
		BTNode* front = QueueFront(&q);
		if (front == NULL)
		{
			if (!Queueempty(&q))
				return false;
			return false;
		}
		QueuePop(&q);
	}
	return true;
}


BTNode* BinaryTreeCreat(BTDatatype* a, int* pi)//创建一棵二叉树
{
	if (a[*pi] == '#')
		return NULL;
	else
	{
		BTNode* root = (BTNode*)malloc(sizeof(BTNode));
		root->_data = a[*pi];
		(*pi)++;
		root->_left = BinaryTreeCreat(a, pi);
		(*pi)++;
		root->_right = BinaryTreeCreat(a, pi);
		return root;

	}

}
void BinaryTreeDetory(BTNode* root)//销毁二叉树
{
	if (root == NULL)
		return;
	BinaryTreeDetory(root->_left);
	BinaryTreeDetory(root->_right);
	free(root);
	root = NULL;
}

int BinaryTreeSize(BTNode* root)//返回二叉树的结点个数
{
	if (root == NULL)
		return 0;
	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}

int BinaryLeaveSize(BTNode* root)//返回二叉树的叶子个数
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;
	return BinaryLeaveSize(root->_left) + BinaryLeaveSize(root->_right);
}
int BinaryLeaveKSize(BTNode* root,int k)//返回二叉树第 K 层的结点个数
{
	if (root == NULL)
		return 0;
	if (root != NULL && k == 1)
		return 1;
	return BinaryLeaveKSize(root->_left, k - 1) + BinaryLeaveKSize(root->_right, k - 1);
}

BTNode* BinaryTreeFind(BTNode* root, BTDatatype x)//返回二叉树中某一个值为 X 的结点
{
	BTNode* lret;
	BTNode* rret;
	if (root == NULL)
		return NULL;
	if (root->_data == x)
		return root;
	lret = BinaryTreeFind(root->_left, x);
	if (lret != NULL)
		return lret;
	rret = BinaryTreeFind(root->_right, x);
	if (rret != NULL)
		return rret;
	return NULL;
}

void BinaryTreePrevOrder(BTNode* root)//前序遍历
{
	if (root == NULL)
		return;
	printf("%c ", root->_data);

	BinaryTreePrevOrder(root->_left);

	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(BTNode* root)//中序遍历
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}
void BinaryTreePostOrder(BTNode* root)//后序遍历
{
	if (root == NULL)
		return;

	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);

	printf("%c ", root->_data);
}



void TestBinaryTree()
{
	BTNode* root;
	char str[] = "ABC##DE#G##F###";
	int i = 0;
	root = BinaryTreeCreat(str, &i);
	printf("前序为： ");
	BinaryTreePrevOrder(root);
	printf("\n中序为： ");
	BinaryTreeInOrder(root);
	printf("\n后序为： ");
	BinaryTreePostOrder(root);
	printf("\n");
	printf("层序遍历为： ");
	BinaryTreeLevelOrder(root);
}