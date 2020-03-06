// write your code here cpp
#include<iostream>
using namespace std;
long long fib(int num)
{
	long long arr[91] = { 0 };
	long long totol = 0;
	arr[1] = 1;
	for (int i = 2; i <= num+1; ++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[num+1];
}
int main()
{
	int num;
	while (cin >> num)
	{
		cout << fib(num) << endl;
	}
	return 0;
}