/*��������
С���������� hello ���ֵ��ʷǳ�����Ȥ�����ֵ��ʿ������÷�Ϊ�ĶΣ���һ����һ������������ĸ��ɣ�
�ڶ�����һ������Ԫ����ĸ��ɣ���������һ������������ĸ��ɣ����Ķ���һ������Ԫ����ĸ��ɡ�
����һ�����ʣ����ж���������Ƿ�Ҳ�����ֵ��ʣ�����������yes�����������no�� 
Ԫ����ĸ���� a, e, i, o, u���������������Ϊ������ĸ��
�����ʽ
����һ�У�����һ�����ʣ�������ֻ����СдӢ����ĸ��
�����ʽ
����𰸣�����Ϊyes������Ϊno��
��������
lanqiao
�������
yes
��������
world
�������
no
����������ģ��Լ��
�����������������������е���ĸ����������100��*/
#include<iostream>
#include<string>
using namespace std;
bool isword(string str,int i)
{
	int num = 0;
	if (i < str.size() && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
		++num;
	else
		return false;
	while (i < str.size() && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
		++i;
	if (i < str.size() && str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		++num;
	else
		return false;
	while (i < str.size() && str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		++i;
	if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
		++num;
	else
		return false;
	while (i < str.size() && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
		++i;
	if (i < str.size() && str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		++num;
	else
		return false;
	while (i < str.size() && str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		++i;
	if (num == 4 && i == str.size())
		return true;
	else
		return false;
}
int main()
{
	string str;
	while (cin >> str)
	{
		if (isword(str, 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	
	return 0;
}