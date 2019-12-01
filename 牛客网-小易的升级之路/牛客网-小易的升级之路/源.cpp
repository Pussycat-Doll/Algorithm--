#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int gcd(int b, int c)
{
	int temp;
	while (c)
	{
		temp = b % c;
		b = c;
		c = temp;
	}
	return b;
}
int main()
{
	int size, c;
	while (cin >> size >> c)
	{
		vector<int> bn;
		while (size--)
		{
			int x;
			cin >> x;
			bn.push_back(x);
		}
		for (size_t i = 0; i < bn.size(); ++i)
		{
			if (bn[i] <= c)
				c += bn[i];
			else
				c += gcd(bn[i], c);
		}
		cout << c << endl;
	}
	
	system("pause");
	return 0;
}