/*�������������֮���ҵ�ѭ����������������Ӧ�Ĵ�����
ѭ��Ҫ����Ϊ��������3���1����Ϊż��������2��ֱ��1Ϊֹ��*/
#include<iostream>
using namespace std;
int times(int num)
{
	int time = 0;
	while (num != 1)
	{
		num % 2 == 0 ? num /= 2 : (num *= 3)++;
		++time;
	}
	return time;
}
int main()
{
	int num1, num2;
	while (cin >> num1 >> num2)
	{
		cout << num1 << " " << num2 << " ";
		if (num2 < num1)
			swap(num1, num2);
		int max = times(num1);
		while (num1 <= num2)
		{
			int time = times(num1);
			if (time > max)
				max = time;
			num1++;
		}
		cout << ++max << endl;
	}
	return 0;
}