#include<iostream>
using namespace std;
int isnine(int num)
{
	if (num == 0)
		return 0;
	if (num % 10 / 9 == 1)
		return 1;
	else
		return isnine(num / 10);
}
int main()
{
	//	int num;
	//	cin>>num;
	//	int n = 0;
	//	for(int i = 1; i <= num; ++i)
	//	{
	//		if(num % i == 0)
	//		++n;
	//	}
	//	cout<<n<<endl;

	//	double num2;
	//	cin>>num2;
	//	cout<<num2*1024<<endl;

	/*int n = 0;
	for (int i = 10; i <= 2019; ++i)
	{
		n += isnine(i);
	}
	/*cout << isnine(890) << endl;
	cout << isnine(9) << endl;
	cout << isnine(999) << endl;
	cout << isnine(900) << endl;
	cout << isnine(199) << endl;
	cout << n << endl;*/

	int num;
	int i = 0;
	cin >> num;
	while (num > pow(2, i))
	{
		num -= pow(2, i);
		++i;
	}
	cout << pow(2, i) <<endl;
	cout << num << endl;
	return 0;
}