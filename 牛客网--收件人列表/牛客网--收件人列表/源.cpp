#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		string ve;
		cin.ignore();
		while (num--)
		{
			string str;
			getline(cin, str);
			if (str.find(',') != string::npos || str.find(' ') != string::npos)
			{
				str += '"';
				str.insert(str.begin(), '"');
			}
			str += ", ";
			ve += str;
		}
		ve.erase(ve.end() - 1);
		ve.erase(ve.end() - 1);
		cout << ve << endl;
	}
	return 0;
}
