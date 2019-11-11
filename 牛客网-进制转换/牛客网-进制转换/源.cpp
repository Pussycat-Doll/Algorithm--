#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	int M;
	int N;
	cin >> M >> N;
	int bit = 0;
	vector<char> vt;
	while (M)
	{
		bit = M%N;
  		if (N > 9 && bit > 9)
		{
			char ch = 'A';
			ch = 'A' + (bit - 9);
			vt.insert(vt.begin(), ch);
		}
		else
			vt.insert(vt.begin(), bit + '0');
		M = M / N;
	}
	for (int i = 0; i < vt.size(); ++i)
	{
		cout << vt[i];
	}
	cout << endl;
	system("pause"); 
	return 0;
}