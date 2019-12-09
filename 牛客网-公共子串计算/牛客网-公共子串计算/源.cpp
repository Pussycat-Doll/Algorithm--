#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;


int main()
{
	string str1,str2;
	cin >> str1 >> str2;
	int size1 = str1.size();
	int size2 = str2.size();
	int len_max = 0;
	vector<vector<int>> depth(size1, vector<int>(size2, 0));
	for (size_t i = 0; i < size1; ++i)
	{
		for (size_t j = 0; j < size2; ++j)
		{
			if (str1[i] == str2[j])
			{
				if (i >= 1 && j >= 1)
					depth[i][j] = depth[i - 1][j - 1] + 1;
				else
					depth[i][j] = 1;
			}
			if (depth[i][j] > len_max)
				len_max = depth[i][j];
		}
	}
	cout << len_max << endl;
	system("pause");
	return 0;
}