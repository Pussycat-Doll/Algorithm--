/*
��Ŀ����
�ַ����������������
����
��һ����һ��������N�����Ϊ100��֮���Ƕ����ַ�������������N���� ÿһ���ַ������ܺ��пո��ַ���������1000��
���
�Ƚ������е�ǰN���ַ��������ܺ��пո�ԭ��������ٽ����µ��ַ����������пո��Կո��س��ָ����ΰ��������ÿ�����֮�����һ�����С�
��������
2
www.dotcpp.com DOTCPP
A C M
D O T CPP
�������
www.dotcpp.com DOTCPP

A C M

D

O

T

CPP
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num = 0;
    cin >> num;
    getchar();//getchar()����������num֮�����ڻ������Ļ��з�
    string str;
    while (num--)
    {
        getline(cin, str);
        cout << str<<endl<<endl;
    }
    while (cin >> str)
    {
        cout << str<<endl<<endl;
    }
    return 0;
}