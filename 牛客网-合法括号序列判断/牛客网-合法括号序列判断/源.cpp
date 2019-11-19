#define _CRT_SECURE_NO_WARNINGS 1
/*链接：https://www.nowcoder.com/questionTerminal/d8acfa0619814b2d98f12c071aef20d4
来源：牛客网

对于一个字符串，请设计一个算法，判断其是否为一个合法的括号串。

给定一个字符串A和它的长度n，请返回一个bool值代表它是否为一个合法的括号串。

测试样例：
"(()())",6
返回：true
测试样例：
"()a()()",7
返回：false*/
#include<iostream>
#include<string>
#include<stack>
#include<cstdlib>
using namespace std;
class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		if (A.size() % 2 == 1)
			return false;
		if (A[0] == ')')
			return false;
		stack<char> st;
		for (size_t i = 0; i < A.size(); ++i)
		{
			if (A[i] != '(' && A[i] != ')')
				return false;
			else if (A[i] == '(')
				st.push(A[i]);
			else if (!st.empty() && A[i] == ')')
				st.pop();
			else
				return false;
		}
		if (st.empty())
			return true;
		else
			return false;
	}
};
int main()
{
	string st = "()(())";
	Parenthesis A;
	cout<<A.chkParenthesis(st, 6)<<endl;
	system("pause");
	return 0;
}