/*
蛇形矩阵是由1开始的自然数依次排列成的一个矩阵上三角形。
输入
本题有多组数据，每组数据由一个正整数N组成。（N不大于100）
输出
对于每一组数据，输出一个N行的蛇形矩阵。两组输出之间不要额外的空行。矩阵三角中同一行的数字用一个空格分开。
行尾不要多余的空格。
样例输入
5

样例输出
0  1 3 6 10 15           
1  2 5 9 14              
2  4 8 13
3  7 12
4  11
每一行的首元素，都是元素所在行数+上一行元素的首元素；
每一行的其他元素 = 前一个元素+次序数+行数；
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int size = 0;
	cin >> size;
	int arr[100][100] = {0};
	arr[0][0] = 1;
	//行首元素初始化
	for (int i = 1; i < size; ++i)
	{
		arr[i][0] = i + arr[i - 1][0];
	}
	//行其他元素初始化
	int num = size;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 1; j < num; ++j)
		{
			arr[i][j] = arr[i][j - 1] + j + 1 + i;
		}
		--num;
	}
	//输出
	num = size;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < num; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
		--num;
	}
	return 0;
}