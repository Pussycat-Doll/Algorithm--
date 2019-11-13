#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	int num = 15;
	//cin >> num;
	int min = 0;
	while (1)
	{
		c = a + b;
		a = b;
		b = c;
		if (num - c > 0)
			min = num - c;
		else{
			min = min < (c - num) ? min : (c - num);
			break;
		}
	}
	cout << min << endl;
	system("pause");
	return 0;
}