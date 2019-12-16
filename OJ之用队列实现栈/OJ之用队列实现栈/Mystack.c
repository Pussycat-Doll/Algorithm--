#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->_front = pq->_tail = NULL;
}
void QueueDestory(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->_front;
	while (cur != NULL)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}
}

QueueNode* BuyQueueNode(QuDataType x)
{
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->_data = x;
	newnode->_next = NULL;
	return newnode;
}
void QueuePush(Queue* pq, QuDataType x)
{
	assert(pq);
	QueueNode* newnode = BuyQueueNode(x);
	if (pq->_tail == NULL)
	{
		pq->_front = pq->_tail = newnode;
	}
	else
	{
		pq->_tail->_next = newnode;
		pq->_tail = newnode;
	}

	
}
void QueuePop(Queue* pq)
{
	assert(pq && pq->_front);
	if ((pq->_front == pq->_tail))
	{
		free(pq->_front);
		pq->_front = pq->_tail = NULL;
	}
	else
	{
		QueueNode* next = pq->_front->_next;
		free(pq->_front);
		pq->_front = next;
	}
}

QuDataType QueueFront(Queue* pq)//返回队头的值
{
	assert(pq && pq->_front);
	return pq->_front->_data;
}
QuDataType QueueBack(Queue* pq)//返回队尾的值
{
	assert(pq && pq->_tail);
	return pq->_tail->_data;
}

bool Queueempty(Queue* pq)
{
	assert(pq);
	return pq->_tail == NULL;
}

/** Initialize your data structure here. */

MyStack* myStackCreate() {
	MyStack* mystack = (MyStack*)malloc(sizeof(MyStack));
	mystack->_size = 0;
	return mystack;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) 
{
	assert(obj);
	if (Queueempty(&(obj->_q1)))
	{
		QueuePush(&(obj->_q2), x);
	}
	else
	{
		QueuePush(&(obj->_q1), x);
	}
	obj->_size++;
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) 
{
	assert(obj);
	if (!Queueempty(&(obj->_q1)))
	{
		while (obj->_size > 1)
		{
			int x = QueueFront(&(obj->_q1));
			QueuePop(&(obj->_q1));
			obj->_size--;
			QueuePush(&(obj->_q2),x);
		}
		int element = QueueFront(&(obj->_q1));
		QueuePop(&(obj->_q1));
		obj->_size--;
		return element;
	}
	else
	{
		while (obj->_size > 1)
		{
			int x = QueueFront(&(obj->_q2));
			QueuePop(&(obj->_q2));
			obj->_size--;
			QueuePush(&(obj->_q1), x);
		}
		int element = QueueFront(&(obj->_q2));
		QueuePop(&(obj->_q2));
		obj->_size--;
		return element;
	}
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
	assert(obj);
	if (!Queueempty(&(obj->_q1)))
	{
		while (obj->_size > 1)
		{
			int x = QueueFront(&(obj->_q1));
			QueuePop(&(obj->_q1));
			obj->_size--;
			QueuePush(&(obj->_q2), x);
		}
		int element = QueueFront(&(obj->_q1));
		QueuePop(&(obj->_q1));
		obj->_size--;
		QueuePush(&(obj->_q2), element);
		return element;
	}
	else
	{
		while (obj->_size > 1)
		{
			int x = QueueFront(&(obj->_q2));
			QueuePop(&(obj->_q2));
			obj->_size--;
			QueuePush(&(obj->_q1), x);
		}
		int element = QueueFront(&(obj->_q2));
		QueuePop(&(obj->_q2));
		obj->_size--;
		QueuePush(&(obj->_q1), element);
		return element;
	}
}


/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	assert(obj);
	if (!Queueempty(&(obj->_q1)) && !Queueempty(&(obj->_q2)))
	{
		return true;
	}
	return false;
}

void myStackFree(MyStack* obj) {
	assert(obj);
	if (Queueempty(&(obj->_q1)))
	{
		QueueDestory(&(obj->_q1));
	}
	if (Queueempty(&(obj->_q2)))
	{
		QueueDestory(&(obj->_q2));
	}
}