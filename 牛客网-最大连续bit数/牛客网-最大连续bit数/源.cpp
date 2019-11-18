#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int num = 13;
	//cin >> num;
	int count = 0;
	int max = 0;
	while (num)
	{
		if (num & 1 == 1)
			count++;
		else
		{
			if (max < count)
				max = count;
			count = 0;
		}
		num >>= 1;
	}
	if (max < count)
		max = count;
	cout << max << endl;
	system("pause");
	return 0;
}