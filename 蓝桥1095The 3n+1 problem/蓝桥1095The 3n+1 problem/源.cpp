/*在输入的两个数之间找到循环次数最大的数所对应的次数，
循环要求，若为奇数，乘3后加1，若为偶数，除以2，直到1为止。*/
#include<iostream>
using namespace std;
int times(int num)
{
	int time = 0;
	while (num != 1)
	{
		num % 2 == 0 ? num /= 2 : (num *= 3)++;
		++time;
	}
	return time;
}
int main()
{
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		cout << num1 << " " << num2 << " ";
		if (num2 < num1)
			swap(num1, num2);
		int max = times(num1);
		while (num1 <= num2)
		{
			int time = times(num1);
			if (time > max)
				max = time;
			num1++;
		}
		cout << ++max << endl;
	}
	return 0;
}