#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>

typedef int QuDataType;
typedef struct QueueNode
{
	struct QueueNode* _next;
	QuDataType _data;
}QueueNode;

typedef struct Queue
{
	QueueNode* _front;
	QueueNode* _tail;
}Queue;

typedef struct {
	Queue _q1;
	Queue _q2;
	size_t _size;
} MyStack;

/** Initialize your data structure here. */
MyStack* myStackCreate();
/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x);
/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj);
/** Get the top element. */
int myStackTop(MyStack* obj);
/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj);
void myStackFree(MyStack* obj);
