#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int divisor(int num)
{
	int sum = 0;
		if (num % 2 == 0)
		{
			sum++;
			while (num %2 == 0)
			{
				num /= 2;
			}		
		}
		if (num % 3 == 0)
		{
			sum++;
			while (num %3 == 0)
			{
				num /= 3;
			}
		}
		if (num % 5 == 0)
		{
			sum++;
			while (num %5 == 0)
			{
				num /= 5;
			}
		}
		if (num != 0 && num != 1)
			++sum;
	return sum;
}
int main()
{
	int num;
	while (cin >> num)
	{
		cout << divisor(num) << endl;
	}
	system("pause");
	return 0;
}