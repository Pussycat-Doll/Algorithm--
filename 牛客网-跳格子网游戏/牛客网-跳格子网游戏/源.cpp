#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int fib(int num)
{
	if (num == 0)
		return 1;
	else if (num == 1)
		return 1;
	else
		return fib(num - 1) + fib(num - 2);

}
int main()
{
	int num;
	cin >> num;
	
		cout << fib(num) << endl;
		system("pause");
	return 0;
}