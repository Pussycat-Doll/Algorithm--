/*����һ����Ȼ��n����n ��ʼ�������β���������set(n)�е������¡�
(1) n��set(n)��
(2) ��n ����߼���һ����Ȼ����������Ȼ�����ܳ��������ӵ�����һ�룻
(3) ���˹�����д���ֱ�������������Ȼ��Ϊֹ��
���磬set(6)={6,16,26,126,36,136}��������set(6)����6 ��Ԫ�ء�
ע��������Ƕ��ؼ���
���ڸ�������Ȼ��n�����������set(n)�е�Ԫ�ظ�����
*/
#include<iostream>
using namespace std;
//��������ʽ��set(n)=1+(set(1)+set(2)+...+set(n/2))
int set(int n)
{
	int sum = 1;
	for (int i = 1; i <= n / 2; ++i)
	{
		sum += set(i);
	}
	return sum;
}
int main()
{
	int n;
	while (cin >> n)
	{
		cout << set(n) << endl;
	}
	return 0;
}