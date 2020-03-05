#include<iostream>
using namespace std;
long BreakfastTotle(int from, int to)
{
	long long num = 0;
	long long arr[81] = { 0 };
	arr[0] = 0;
	arr[1] = arr[2] = 1;
	for (int i = 2; i < 81; ++i)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (int i = from; i <= to; ++i)
	{
		num += arr[i];
	}
	return num;
}
int main()
{
	int from, to;
	while (cin >> from >> to)
	{
		cout << BreakfastTotle(from, to) << endl;
	}
	return 0;
}