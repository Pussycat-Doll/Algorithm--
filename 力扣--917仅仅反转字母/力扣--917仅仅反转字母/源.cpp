/*给定一个字符串 S，返回 “反转后的” 字符串，其中不是字母的字符都保留在原地，
而所有字母的位置发生反转。 

示例 1：

输入："ab-cd"
输出："dc-ba"
示例 2：

输入："a-bC-dEf-ghIj"
输出："j-Ih-gfE-dCba"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-only-letters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;
/*利用栈，遇到字符就将其压入栈内，带字符完全压入栈内
若为字符串内进行遍历，若为字符，则栈内字符出栈*/
string reverseOnlyLetters(string S) 
{
	if (S.size() == 0)
		return S;
	stack<char> st;
	for (size_t i = 0; i < S.size(); ++i)
	{
		if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z'))
			st.push(S[i]);
	}
	for (size_t i = 0; i < S.size(); ++i)
	{
		if ((S[i] >= 'A' && S[i] <= 'Z') || (S[i] >= 'a' && S[i] <= 'z'))
		{
			S[i] = st.top();
			st.pop();
		}
	}
	return S;
}
int main()
{

	return 0;
}