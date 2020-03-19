/*题目描述
This is the first problem for test. Since all we know the ASCII code, your job is simple: Input numbers and output corresponding messages.
输入
The input will contain a list of positive integers separated by whitespaces(spaces, newlines, TABs). Please process to the end of file (EOF). The integers will be no less than 32.
输出
Output the corresponding message. Note there is NOT a newline character in the end of output.
样例输入
72 101 108 108 111 44 32 119 111 114 108 100 33
样例输出
Hello, world!*/
#include<iostream>
using namespace std;
int main()
{
    int ch;
    while (cin >> ch)
    {
        printf("%c", ch);
    }
    return 0;
}