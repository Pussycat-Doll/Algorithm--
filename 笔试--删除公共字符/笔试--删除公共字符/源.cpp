#include<string>
#include<iostream>
using namespace std;

int main()
{
	string str1,str2;
	getline(cin, str1);
	getline(cin, str2);
	string str;
	for (int i = 0; i < str1.size(); ++i)
	{
		int j;
		for (j = 0; j < str2.size(); ++j)
		{
			if (str1[i] == str2[j])
				break;
		}
		if (j == str2.size())
			str.push_back(str1[i]);
	}
	cout << str << endl;
	return 0;
}