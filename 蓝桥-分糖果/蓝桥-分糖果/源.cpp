/*��Ŀ����
��������
��n��С����Χ����һȦ����ʦ��ÿ��С���������ż�����ǹ���Ȼ������������Ϸ��
ÿ��С���Ѷ����Լ����ǹ���һ������ֱߵĺ��ӡ�
һ�ַ��Ǻ�ӵ���������ǵĺ�������ʦ����1���ǹ����Ӷ����ż����
�������������Ϸ��ֱ������С���ѵ��ǹ�������ͬΪֹ��
���������Ԥ������֪�ĳ�ʼ�ǹ������£���ʦһ����Ҫ�������ٸ��ǹ���
����
�������ȶ���һ������N(2< N< 100)����ʾС���ѵ������� 
������һ���ÿո�ֿ���N��ż����ÿ��ż��������1000����С��2�� 
���
Ҫ��������һ����������ʾ��ʦ��Ҫ�������ǹ�����
��������
3 
2 2 4 
�������
4*/
#include<iostream>
#include<vector>
using namespace std;
int sum;
void func1(vector<int>& arr)//���Ǹ����
{
	arr[0] /= 2;
	int temp = arr[0];
	for (int i = 0; i < arr.size() - 1; ++i)
	{
			int s = (arr[i + 1] / 2);
			arr[i] += s;
			arr[i + 1]-=s;
	}
	arr[arr.size() - 1] += temp;
}
void func2(vector<int>& arr)//�������ĺ��Ӳ���
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] % 2 == 1)
		{
			++arr[i];
			++sum;
		}
	}
}
int main()
{
	int n;
	sum = 0;
	int flag = 0;
	cin >> n;
	vector<int> arr;
	while (n--)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	while (!flag)
	{
		for (int i = 0; i < arr.size() - 1; ++i)//���ж�
		{
			if (arr[i] == arr[i + 1])
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
		func1(arr);
		func2(arr);	
	}
	cout << sum << endl;
	return 0;
}