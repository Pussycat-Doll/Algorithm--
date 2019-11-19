//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//#include<string>
//#include<cstring>
//using namespace std;
//bool is_lexicographically(vector<char *> str)
//{
//	size_t i = 0;
//	if (strcmp(str[0], str[1]) >= 0)
//	{
//		while (i < str.size() - 1 && strcmp(str[i], str[i + 1]) >= 0)
//			++i;
//		if (i == str.size() - 1)
//			return true;
//		else
//			return false;
//	}
//	else
//		return false;
//}
//bool is_length(vector<char *> str)
//{
//	size_t i = 0;
//	if (strlen(str[0]) <= strlen(str[1]))
//	{
//		while (i < str.size() - 1 && strlen(str[i]) <= strlen(str[i + 1]))
//			++i;
//		if (i == str.size() - 1)
//			return true;
//		else
//			return false;
//	}
//	else
//	{
//		while (i < str.size() - 1 && strlen(str[i]) > strlen(str[i + 1]))
//			++i;
//		if (i == str.size() - 1)
//			return true;
//		else
//			return false;
//	}
//}
//int main()
//{
//	int num;
//	vector<char *> str;
//	cin >> num;
//	while (num--)
//	{
//		char st[100];
//		cin >> st;
//		str.insert(str.end(), st);
//	}
//	if (is_length(str) && is_lexicographically(str))
//		cout << "both" << endl;
//	else if (is_lexicographically(str))
//		cout << "lexicographically" << endl;
//	else if (is_length(str))
//		cout << "lengths" << endl;
//	else
//		cout << "none" << endl;
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
/*链接：https://www.nowcoder.com/questionTerminal/839f681bf36c486fbcc5fcb977ffe432
来源：牛客网

考拉有n个字符串字符串，任意两个字符串长度都是不同的。考拉最近学习到有两种字符串的排序方法： 1.根据字符串的字典序排序。例如：
"car" < "carriage" < "cats" < "doggies < "koala"
2.根据字符串的长度排序。例如：
"car" < "cats" < "koala" < "doggies" < "carriage"
考拉想知道自己的这些字符串排列顺序是否满足这两种排序方法，考拉要忙着吃树叶，所以需要你来帮忙验证。

输入描述:
输入第一行为字符串个数n(n ≤ 100)
接下来的n行,每行一个字符串,字符串长度均小于100，均由小写字母组成


输出描述:
如果这些字符串是根据字典序排列而不是根据长度排列输出"lexicographically",

如果根据长度排列而不是字典序排列输出"lengths",

如果两种方式都符合输出"both"，否则输出"none"
示例1
输入
3
a
aa
bbb
输出
both*/
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
bool is_lexicographically(vector<string> str)
{
	size_t i = 0;
	if ((str[0] <= str[1]))
	{
		while (i < str.size() - 1 && str[i] <= str[i + 1])
			++i;
		if (i == str.size() - 1)
			return true;
		else
			return false;
	}
	else
		return false;
}
bool is_length(vector<string> str)
{
	size_t i = 0;
	if (str[0].size() <= str[1].size())
	{
		while (i < str.size() - 1 && str[i].size() <= str[i+1].size())
			++i;
		if (i == str.size() - 1)
			return true;
		else
			return false;
	}
	else
	{

		return false;
	}
}
int main()
{
	int num;
	vector<string> str;
	cin >> num;
	while (num--)
	{
		string st;
		cin >> st;
		str.insert(str.end(), st);
	}
	if (is_length(str) && is_lexicographically(str))
		cout << "both" << endl;
	else if (is_lexicographically(str))
		cout << "lexicographically" << endl;
	else if (is_length(str))
		cout << "lengths" << endl;
	else
		cout << "none" << endl;
	system("pause");
	return 0;
}