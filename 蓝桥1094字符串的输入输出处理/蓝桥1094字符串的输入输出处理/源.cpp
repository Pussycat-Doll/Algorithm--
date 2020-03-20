/*
题目描述
字符串的输入输出处理。
输入
第一行是一个正整数N，最大为100。之后是多行字符串（行数大于N）， 每一行字符串可能含有空格，字符数不超过1000。
输出
先将输入中的前N行字符串（可能含有空格）原样输出，再将余下的字符串（不含有空格）以空格或回车分割依次按行输出。每行输出之间输出一个空行。
样例输入
2
www.dotcpp.com DOTCPP
A C M
D O T CPP
样例输出
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
    getchar();//getchar()接收输入了num之后留在缓冲区的换行符
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