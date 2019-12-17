#define _CRT_SECURE_NO_WARNINGS 1
#include"BT.h"
#include"queue.h"


void BinaryTreeLevelOrder(BTNode* root)//�������������
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

bool BinaryTreeComplete(BTNode* root)//�ж϶������Ƿ�Ϊ��ȫ������
//����ʱ��Ϊ NULL������ʣ��Ķ�Ӧ��Ϊ NULL
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


BTNode* BinaryTreeCreat(BTDatatype* a, int* pi)//����һ�ö�����
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
void BinaryTreeDetory(BTNode* root)//���ٶ�����
{
	if (root == NULL)
		return;
	BinaryTreeDetory(root->_left);
	BinaryTreeDetory(root->_right);
	free(root);
	root = NULL;
}

int BinaryTreeSize(BTNode* root)//���ض������Ľ�����
{
	if (root == NULL)
		return 0;
	return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
}

int BinaryLeaveSize(BTNode* root)//���ض�������Ҷ�Ӹ���
{
	if (root == NULL)
		return 0;
	if (root->_left == NULL && root->_right == NULL)
		return 1;
	return BinaryLeaveSize(root->_left) + BinaryLeaveSize(root->_right);
}
int BinaryLeaveKSize(BTNode* root,int k)//���ض������� K ��Ľ�����
{
	if (root == NULL)
		return 0;
	if (root != NULL && k == 1)
		return 1;
	return BinaryLeaveKSize(root->_left, k - 1) + BinaryLeaveKSize(root->_right, k - 1);
}

BTNode* BinaryTreeFind(BTNode* root, BTDatatype x)//���ض�������ĳһ��ֵΪ X �Ľ��
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

void BinaryTreePrevOrder(BTNode* root)//ǰ�����
{
	if (root == NULL)
		return;
	printf("%c ", root->_data);

	BinaryTreePrevOrder(root->_left);

	BinaryTreePrevOrder(root->_right);
}

void BinaryTreeInOrder(BTNode* root)//�������
{
	if (root == NULL)
		return;

	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}
void BinaryTreePostOrder(BTNode* root)//�������
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
	printf("ǰ��Ϊ�� ");
	BinaryTreePrevOrder(root);
	printf("\n����Ϊ�� ");
	BinaryTreeInOrder(root);
	printf("\n����Ϊ�� ");
	BinaryTreePostOrder(root);
	printf("\n");
	printf("�������Ϊ�� ");
	BinaryTreeLevelOrder(root);
}