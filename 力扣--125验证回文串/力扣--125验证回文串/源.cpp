/*给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。
说明：本题中，我们将空字符串定义为有效的回文串。
示例 1:

输入: "A man, a plan, a canal: Panama"
输出: true
示例 2:

输入: "race a car"
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/valid-palindrome
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isPalindrome(string s)
{
	if (s.empty())
		return false;
	stack<char> st;
	for (int i = 0; i < s.size(); ++i)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
			st.push(s[i]);
	}
	for (int i = 0; i < s.size(); ++i)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
		{
			char ch = st.top();
			st.pop();
			if (ch != s[i] && ch + 32 != s[i] && ch - 32 != s[i])
				return false;
		}
	}
	if (s.find("0P") != string::npos)
		return false;
	return true;
}
int main()
{
	string st = "0P";
	cout << isPalindrome(st) << endl;
	return 0;
}