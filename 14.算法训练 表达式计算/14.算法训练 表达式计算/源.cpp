#define _CRT_SECURE_NO_WARNINGS 1
	/*14.算法训练 表达式计算  
	问题描述
		 输入一个只包  含加减乖除和括号的合法表达式，求表达式的值。其中除表示整除。
	输入格式
		 输入一行，包含一个表达式。
	输出格式
		 输出这个表达式的值。
	样例输入
	1-2+3*(4-5)
	样例输出
	-4
	数据规模和约定
	表达式长度不超过100，表达式运算合法且运算过程都在int内进行。
	*/
#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<string>
#include<stdlib.h>
using namespace std;
int atoi(string& str)//字符串转换为整型
{
	int flag = 1;
	int num = 0;
	int coe = 1;
	if (str[0] == '-')
	{
		flag = -1;
	}
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
		}
	}
	return flag*num;
}
int evalRPN(vector<string>& tokens)//后缀表达式计算出结果
{
	stack<int> num;
	vector<string>::iterator it = tokens.begin();
	int result = 0;
	while (it != tokens.end())
	{
		if ((*it) != "+" && (*it) != "-" && (*it) != "*" && (*it) != "/")
		{
			int number = atoi(*it);
			num.push(number);
		}
		else
		{
			int num1 = num.top();
			num.pop();
			int num2 = num.top();
			num.pop();
			result = 0;
			switch ((*it)[0])
			{
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				result = num2 / num1;
				break;
			default:
				break;
			}
			num.push(result);
		}
		++it;
	}
	return num.top();
}
/*void func(vector<string> s)
{
	vector<string> vc;
	stack<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] != "+" || s[i] != "-" || s[i] != "*" || s[i] != "/" || s[i] != ")")
		{
			vc.push_back(s[i]);
		}
		else
		{
			if (st.empty())
				st.push(s[i][0]);
			else if ( )
		}
	}
}*/

int main()
{
	vector<string> st = { "4", "3", "-"};
	cout<<evalRPN(st);
	system("pause");
	return 0;
}
