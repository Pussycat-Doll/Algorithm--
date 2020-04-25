/*问题描述
　　对于一个 n 行 m 列的表格，我们可以使用螺旋的方式给表格依次填上正整数，我们称填好的表格为一个螺旋矩阵。
　　例如，一个 4 行 5 列的螺旋矩阵如下：
　　1 2 3 4 5
　　14 15 16 17 6
　　13 20 19 18 7
　　12 11 10 9 8
输入格式
　　输入的第一行包含两个整数 n, m，分别表示螺旋矩阵的行数和列数。
　　第二行包含两个整数 r, c，表示要求的行号和列号。
输出格式
　　输出一个整数，表示螺旋矩阵中第 r 行第 c 列的元素的值。
样例输入
4 5
2 2
样例输出
15*/
#include<iostream>
using namespace std;
int maritx[1001][1001] = { 0 };
int main()
{
	int n, m;
	cin >> n >> m;
	int r, c;
	cin >> r >> c;
    int now = 1;
    int U = 1, D = m, L = 1, R = n;  // 上下左右的边界
    int i = 1, j = 1;    //从 数组1,1位置开始
    while (now <= m * n) {
        //先从左到右写行
        while (now <= m * n && j < R) {
            maritx[i][j] = now++;
            j++;
        }
        //最右边列，从上到下写
        while (now <= m * n && i < D) {
            maritx[i][j] = now++;
            i++;
        }
        //最后一行，从右到左
        while (now <= m * n && j > L) {
            maritx[i][j] = now++;
            j--;
        }
        //最后左边列，从下往上
        while (now <= m * n && i > U) {
            maritx[i][j] = now++;
            i--;
        }
        U++, D--, L++, R--;
        i++, j++;
        //防止m = n 是正方形的情况最后一个数字
        if (now == m * n) {
            maritx[i][j] = now++;
        }
    }
    cout << maritx[r][c] << endl;
	return 0;
}