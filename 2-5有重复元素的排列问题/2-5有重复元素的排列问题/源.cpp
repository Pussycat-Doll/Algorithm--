#include<iostream>
#include<cstring>
using namespace std;
static int count = 0;
void swap(char& a, char& b)
{
	char temp;
	temp = a;
	a = b;
	b = temp;
}
int finish(char list[], int k, int i)
{//��i��Ԫ���Ƿ���ǰ��Ԫ��[k...i-1]�г��ֹ�
	if (i > k)
	{
		for (int j = k; j < i; j++)
			if (list[j] == list[i])
				return 0;
	}
	return 1;
}
void perm(char list[], int k, int m)
{
	if (k == m)    //��ֻʣ��һ��Ԫ��ʱ����� 
	{
		count++;
		for (int i = 0; i <= m; i++)
			printf("%c", list[i]);
		putchar('\n');
	}
	for (int i = k; i <= m; i++)  //���ж��Ԫ�ش����У��ݹ��������
	{
		if (finish(list, k, i))
		{
			swap(list[k], list[i]);
			perm(list, k + 1, m);
			swap(list[k], list[i]);
		}
	}
}
int main()
{
	int i, n;
	cout << "������Ԫ�ظ���:" << endl;
	cin >> n;
	cout << "����������е�Ԫ��:" << endl;
	getchar();
	char* a = new char[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	cout << "���в�ͬ����Ϊ:" << endl;
	perm(a, 0, n - 1);
	cout << "��������Ϊ:" << count << endl;
	return 0;
}