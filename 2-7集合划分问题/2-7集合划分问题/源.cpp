#include<iostream>
using namespace std;
//根据数学公式：n个元素所包含的非空子集个数：2^n-1
int main()
{
	int n;
	while (cin >> n)
	{
		cout << pow(2, n) - 1 << endl;
	}
	return 0;
}