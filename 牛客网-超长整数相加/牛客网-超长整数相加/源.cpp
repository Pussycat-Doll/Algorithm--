#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	string A;
	string B ;
	while (cin >> A >> B)
	{
		string sum;
		string::reverse_iterator it1 = A.rbegin();
		string::reverse_iterator it2 = B.rbegin();
		int flag = 0;
		char ch;
		while (it1 != A.rend() && it2 != B.rend())
		{
			int num1 = *it1 - '0';
			int num2 = *it2 - '0';
			if (num1 + num2 + flag >= 10)
			{
				ch = (num1 + num2 + flag - 10) + '0';
				flag = 1;
			}
			else
				ch = num1 + num2 + '0';
			sum.insert(sum.begin(), ch);
			++it1;
			++it2;
		}
		while (it1 != A.rend())
		{
			if (flag == 1 && *it1 - '0' + flag >= 10)
			{
				ch = *it1 + flag - 10;
			}
			else
			{
				ch = *it1 + flag;
				flag = 0;
			}
			sum.insert(sum.begin(), ch);
			++it1;
		}
		while (it2 != B.rend())
		{
			if (flag == 1 && *it2 - '0' + flag >= 10)
			{
				ch = *it2 + flag - 10;
			}
			else
				ch = *it2;
			sum.insert(sum.begin(), ch);
			++it2;
		}
		if (flag == 1)
			sum.insert(sum.begin(), '1');
		cout << sum << endl;
	}
	system("pause");
	return 0;
}