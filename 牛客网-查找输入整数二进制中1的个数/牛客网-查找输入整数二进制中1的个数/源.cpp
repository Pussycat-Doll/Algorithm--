#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int findNumberOf1(int num)
{
	int count = 0;
	while (num)
	{
		if (num & 1 == 1)
			count++;
		num >>= 1;
	}
	return count;
}
int main()
{
	int num;
	while (cin >> num)
	{
		cout << findNumberOf1(num) << endl;
	}

	system("pause");
	return 0;
}