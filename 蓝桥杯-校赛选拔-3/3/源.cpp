#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<list>
#include<vector>
using namespace std;
int main()
{
	list<int> st;
	int Size;
	cin >> Size;
	int sub = 3;
	cin >> sub;
	while (Size--)
	{
		int x;
		cin >> x;
		st.push_back(x);
	}
	if (sub > st.size())
		cout << "NO RESULT" << endl;
	else
	{
		st.sort();
		int min = st.front();
		int lenth = 1;
		for (size_t i = 0; i < st.size(); ++i)
		{
			if (st.front() > min)
			{
				min = st.front();
				st.pop_front();
				++lenth;
			}
			if (lenth == sub)
			{
				cout << min << endl;
				break;
			}
			st.pop_front();
		}
	}
	system("pause");
	return 0;
}