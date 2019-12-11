#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int minimumTotal(vector<vector<int> > &triangle)
{
	if (triangle.empty())
		return 0;
	vector<vector<int>> arr(triangle);
	int row = triangle.size();
	for (int i = row - 2; i >= 0; --i)//从倒数第二行开始，从上向下
	{
		for (int j = 0; j <= i; ++j)
		{
			arr[i][j] = triangle[i][j] + min(arr[i + 1][j], arr[i + 1][j + 1]);
		}
	}
	return arr[0][0];
}
int main()
{
	vector<vector<int>> triangle = { { 2 }, { 3, 4 }, { 6, 5, 7 }, { 4, 1, 8, 3 } };
	cout<<minimumTotal(triangle) << endl;
	system("pause");
	return 0;
}