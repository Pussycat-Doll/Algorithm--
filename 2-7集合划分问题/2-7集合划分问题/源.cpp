#include<iostream>
using namespace std;
//������ѧ��ʽ��n��Ԫ���������ķǿ��Ӽ�������2^n-1
int main()
{
	int n;
	while (cin >> n)
	{
		cout << pow(2, n) - 1 << endl;
	}
	return 0;
}