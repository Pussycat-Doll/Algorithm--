//组合里面的贝尔数：F(n,m)=F(n-1,m-1)+m*F(n-1,m)
#include<iostream>
using namespace std;

long long func(int n, int m)
{
	if (m == 1)
		return 1;
	if (m == n)
		return 1;
	return func(n - 1, m - 1) + m * func(n - 1, m);
}
int main()
{
	int m, n;
	while (cin >> n >> m)
	{
		cout << func(n, m) << endl;
	}
	return 0;
}