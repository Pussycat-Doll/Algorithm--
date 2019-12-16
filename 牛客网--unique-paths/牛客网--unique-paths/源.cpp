#define _CRT_SECURE_NO_WARNINGS 1
/*一个机器人在m×n大小的地图的左上角（起点，下图中的标记“start"的位置）。
机器人每次向下或向右移动。机器人要到达地图的右下角。（终点，下图中的标记“Finish"的位置）。
可以有多少种不同的路径从起点走到终点？*/
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int uniquePaths(int m, int n) {
		if (m == 0 || n == 0)
			return 1;
		vector<vector<int>> arr(m, vector<int>(n, 1));
		for (int i = 1; i < m; ++i)//从第二行开始
		{
			for (int j = 1; j < n; ++j)
			{
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
		return arr[m - 1][n - 1];
	}
};