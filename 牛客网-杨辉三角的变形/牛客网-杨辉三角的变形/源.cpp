#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

#include<iostream>

#include<vector>
using namespace std;
int main()
{
	int num;
	while (cin >> num)
	{
		vector<vector<int>> ve(num);
		for (size_t i = 0; i < ve.size(); ++i)
		{
			ve[i].resize(2 * i + 1);//¶þÎ¬Êý×é
		}
		int a, b, c = 0;
		ve[0][0] = 1;
		for (int i = 1; i < ve.size(); ++i)
		{
			for (int j = 0; j < ve[i].size(); ++j)
			{
				if (j - 2 < 0)
					a = 0;
				else
					a = ve[i - 1][j - 2];

				if (j - 1 < 0 || j - 1 > ve[i - 1].size() - 1)
					b = 0;
				else
					b = ve[i - 1][j - 1];

				if (j > ve[i - 1].size() - 1)
					c = 0;
				else
					c = ve[i - 1][j];
				ve[i][j] = a + b + c;

			}
		}
		for (size_t i = 0; i < ve[num - 1].size(); ++i)
		{
			if (ve[num - 1][i] % 2 == 0)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}