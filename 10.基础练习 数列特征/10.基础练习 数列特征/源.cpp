/*10.������ϰ ��������  
��������
     ����n�������ҳ���n���������ֵ����Сֵ���͡�
�����ʽ
     ��һ��Ϊ����n����ʾ���ĸ�����
     �ڶ�����n������Ϊ������n������ÿ�����ľ���ֵ��С��10000��
�����ʽ
     ������У�ÿ��һ����������һ�б�ʾ��Щ���е����ֵ���ڶ��б�ʾ��Щ���е���Сֵ�������б�ʾ��Щ���ĺ͡�
��������
5
1 3 -2 4 5
�������
5
-2
11
���ݹ�ģ��Լ��
1 <= n <= 10000��
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
int main()
{
	int size = 0;
	cin >> size;
	list<int> l;
	while (size)
	{
		int x;
		cin >> x;
		l.push_back(x);
		--size;
	}
	int min = l.front();
	int max = l.front();
	int sum = 0;
	list<int>::iterator it = l.begin();
	while (it != l.end())
	{
		if (*it < min)
			min = *it;
		if (*it > max)
			max = *it;
		sum += *it;
		++it;
	}
	cout << max << "\n" << min << "\n" << sum << endl;
	system("pause");
	return 0;
}