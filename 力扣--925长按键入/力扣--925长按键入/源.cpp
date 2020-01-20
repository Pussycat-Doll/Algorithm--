/*你的朋友正在使用键盘输入他的名字 name。偶尔，在键入字符 c 时，按键可能会被长按，
而字符可能被输入 1 次或多次。

你将会检查键盘输入的字符 typed。如果它对应的可能是你的朋友的名字（其中一些字符可能被长按），
那么就返回 True。

输入：name = "alex", typed = "aaleex"
输出：true
解释：'alex' 中的 'a' 和 'e' 被长按。

输入：name = "leelee", typed = "lleeelee"
输出：true*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
bool isLongPressedName(string name, string typed) 
{
	if (typed.size() < name.size())
		return false;
	int j = 0;
	for (int i = 0; i < typed.size(); ++i)
	{
		if (j < name.size() && typed[i] == name[j])
		{
			++j;
			continue;
		}
		else if (j > 0 && typed[i] == name[j - 1]) //实际名字中含有多个连续字母时
		{
			continue;
		}
		else
			return false;
	}
	if (j == name.size())
		return true;
	else
		return false;
}

int main()
{
	string s1 = "aalex";
	string s2 = "aaaleex";
	cout<<isLongPressedName(s1, s2);
	return 0;
}