#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] != 'x' && str[i] != 'y' && str[i] != 'z')
			str[i] += 3;
		else if (str[i] == 'x')
			str[i] = 'a';
		else if (str[i] == 'y')
			str[i] = 'b';
		else
			str[i] = 'c';

	}
	cout << str << endl;
	return 0;
}