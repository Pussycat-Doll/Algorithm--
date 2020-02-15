/*输入一个英文句子，把句子中的单词(不区分大小写)按出现次数按从多到少把单词和次数在屏幕上输出来，要求能识别英文句号和逗号，即是说单词由空格、句号和逗号隔开。
输入描述:
输入有若干行，总计不超过1000个字符。*/
#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	map<string, int> mp;
	string temp;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.')
		{
			if (!temp.empty())
				mp[temp]++;
			temp.clear();
		}
		else
			temp += str[i];
	}
	auto it = mp.begin();
	while (it != mp.end())
	{
		cout << it->first << ":" << it->second << endl;
		++it;
	}
	return 0;
}