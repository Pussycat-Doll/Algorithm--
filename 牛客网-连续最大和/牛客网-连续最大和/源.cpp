#define _CRT_SECURE_NO_WARNINGS 1
/*���ӣ�https://www.nowcoder.com/questionTerminal/5a304c109a544aef9b583dce23f5f5db
��Դ��ţ����

һ�������� N ��Ԫ�أ�����������������͡� ���磺[-1,2,1]������������������Ϊ[2,1]�����Ϊ 3

��������:
����Ϊ���С� ��һ��һ������n(1 <= n <= 100000)����ʾһ����n��Ԫ�� �ڶ���Ϊn������
��ÿ��Ԫ��,ÿ����������32λint��Χ�ڡ��Կո�ָ���

�������:
���������������к�����ֵ��
ʾ��1
����
3 -1 2 1
���
3*/
#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
//int main()
//{
//	vector<int> l = {-1,-2,-3,-4,-5,-6};
//	int num,x;
//	cin >> num;
//	while (num--)
//	{
//		cin >> x;
//		l.push_back(x);
//	}
//	int max = -10000;
//	int end = 0;
//	int start = 0;
//	int sum = 0;
//	for (size_t i = 0; i < l.size(); ++i)
//	{
//		end = i;
//		while (end < l.size())
//		{
//			start = i;
//			while (start <= end)
//			{
//				sum += l[start];
//				++start;
//			}
//			if (sum > max)
//				max = sum;
//			sum = 0;
//			++end;
//		}
//	}
//	cout << max << endl;
//	system("pause");
//	return 0;
//}

int Max(int a, int b)
{
	return a > b ? a : b;
}
int get_max(vector<int> l)
{
	int sum = l[0];
	int max = l[0];
	for (size_t i = 0; i < l.size(); ++i)
	{
		sum = Max(sum + l[i], l[i]);//��̬�滮״̬���� 
		max = Max(sum, max);
	}
	return max;
}
int main()
{
	vector<int> l;
	int num, x;
	cin >> num;
	while (num--)
	{
		cin >> x;
		l.push_back(x);
	}
	cout << get_max(l) << endl;
	system("pause");     
	return 0;
}
