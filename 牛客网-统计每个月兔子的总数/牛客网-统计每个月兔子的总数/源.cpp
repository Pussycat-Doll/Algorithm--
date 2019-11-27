#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
static int sum = 0;
int getTotalCount(int monthCount)
{
	if (monthCount <= 2)
		return 1;
	else if (monthCount == 3)
		return 2;
	else
		return getTotalCount(monthCount - 1) + getTotalCount(monthCount - 2);
}

int main()
{
	int monthCount = 9;
	//cin >> monthCount;
	
	cout << getTotalCount(monthCount)<< endl;
	system("pause");
	return 0;
}