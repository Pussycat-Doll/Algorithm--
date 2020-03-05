#include<iostream>
#include<string>
using namespace std;
int times(string s, string t)
{
	int time = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		int j = 0;
		int k = i;
		while (j < t.size() && t[j] == s[k])
		{
			++j;
			++k;
		}
		if (j == t.size())
		{
			time++;
			i = k - 1;
		}
	}
	return time;
}
int main()
{
	string s, t;
	while (cin>>s>>t)
	{
		cout << times(s, t) << endl;
	}
	return 0;
}