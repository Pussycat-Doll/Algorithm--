#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int end;
	cin >> end;
	int count = 0;
	for (int start = 1; start <= end; ++start)
	{
		int sum = 0;
		for (int i = 1; i < start; ++i)
		{
			if (start % i == 0)
				sum += i;
		}
		if (sum == start)
			++count;
	}
	cout << count << endl;
	system("pause");
	return 0;
}
	