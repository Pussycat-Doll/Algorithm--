#define _CRT_SECURE_NO_WARNINGS 1
#include"queue.h"
int main()
{
	MyStack* obj = myStackCreate();
	myStackPush(obj, 9);

	int param_2 = myStackPop(obj);

	int param_3 = myStackTop(obj);

	bool param_4 = myStackEmpty(obj);

	myStackFree(obj);
	system("pause");
	return 0;
}