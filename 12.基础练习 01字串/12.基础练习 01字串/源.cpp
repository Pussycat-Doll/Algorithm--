#define _CRT_SECURE_NO_WARNINGS 1
/*12.������ϰ 01�ִ�  
��������
     ���ڳ���Ϊ5λ��һ��01����ÿһλ��������0��1��һ����32�ֿ��ܡ����ǵ�ǰ�����ǣ�
00000
00001
00010
00011
00100
     �밴��С�����˳�������32��01����
�����ʽ
     ������û�����롣
�����ʽ
     ���32�У�����С�����˳��ÿ��һ������Ϊ5��01����
�������
00000
00001
00010
00011
*/
#include<iostream>
#include<stdlib.h>
#include<list>
using namespace std;
void print(list<int> l)
{
	list<int> ::iterator it = l.begin();
	while (it != l.end())
	{
		cout << *it;
		++it;
	}
	cout << endl;
}
int main()
{
	int num = 0;
	for (int i = 0; i <= 1; ++i)
	{
		for (int j = 0; j <= 1; ++j)
		{
			for (int k = 0; k <= 1; ++k)
			{
				for (int a = 0; a <= 1; ++a)
				{
					for (int b = 0; b <= 1; ++b)
					{
						list<int> l;
						l.push_back(i);
						l.push_back(j);
						l.push_back(k);
						l.push_back(a);
						l.push_back(b);
						print(l);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}