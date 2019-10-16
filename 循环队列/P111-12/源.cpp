#define _CRT_SECURE_NO_WARNINGS 1
//12.Ҫ��ѭ�����У�ע�ⲻ��ͷָ�룩������һ����־��tag, 
//��tagΪ0��1������ͷβָ����ͬʱ�Ķ���״̬�����д���
//�ṹ��Ӧ�����������㷨��
//flagΪ0ʱ��ʾѭ������û������״̬
//flag = 1 ��ʾ��������
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#define max_size 6;
typedef int QuDataType;
typedef struct Cyc_queue
{
	QuDataType* _arr;
	size_t _front;
	size_t _tail;
	size_t tag;
	size_t _capacity = max_size;
}Cyc_queue;

void Cyc_queInit(Cyc_queue* q)
{
	assert(q);
	q->_arr = (QuDataType*)malloc(sizeof(QuDataType)*q->_capacity);
	q->_front = q->_tail = q->tag = 0;
}
void Cyc_queDestory(Cyc_queue* q)
{
	assert(q);
	if (q != NULL)
		free(q->_arr);
	q->_arr = NULL;
	q->_capacity = q->_front = q->_tail = q->tag = 0;
}

size_t size(Cyc_queue* q)
{
	assert(q);
	if (q->tag == 1)
		return q->_capacity;
	else
		return (q->_tail - q->_front + q->_capacity) % q->_capacity;
}
void Cyc_quePush(Cyc_queue* q, QuDataType x)
{
	assert(q);
	if (size(q) == q->_capacity)
	{
		printf("��ѭ������������\n");
	}
	else
	{
		q->_arr[q->_tail] = x;
		printf("Ԫ�أ�%d ����...\n",x);
		q->_tail = (q->_tail + 1)%q->_capacity;
		if (q->_front == q->_tail && q->tag == 0)//��������ʱ��βָ������ָ������
			 q->tag = 1;
	}
}

void Cyc_quePop(Cyc_queue* q)
{
	assert(q);
	if (size(q) == 0)
		printf("��ѭ�����д�ʱΪ�ա�\n");
	else
	{
		printf("Ԫ�أ�%d  ���ӡ�\n", q->_arr[q->_front]);
		q->_front = (q->_front + 1) % q->_capacity;
		q->tag = 0;
	}
}
int main()
{

	Cyc_queue q;
	Cyc_queInit(&q);
	Cyc_quePush(&q, 1);
	Cyc_quePush(&q, 2);
	Cyc_quePush(&q, 3);
	Cyc_quePush(&q, 4);
	Cyc_quePush(&q, 5);
	Cyc_quePush(&q, 6);
	Cyc_quePush(&q, 7);
	Cyc_quePop(&q);
	Cyc_quePop(&q);
	Cyc_quePop(&q);
	Cyc_quePop(&q);
	Cyc_quePop(&q);
	Cyc_quePop(&q);
	Cyc_quePop(&q);
	
	system("pause");
	return 0;
}