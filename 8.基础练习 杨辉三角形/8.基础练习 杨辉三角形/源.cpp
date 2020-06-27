/*8.基础练习 杨辉三角形  
问题描述
     杨辉三角形又称Pascal三角形，它的第i+1行是(a+b)i的展开式的系数。
     它的一个重要性质是：三角形中的每个数字等于它两肩上的数字相加。
     下面给出了杨辉三角形的前4行：　　
   1
　　
  1 1
　　
 1 2 1
　　
1 3 3 1
　　
     给出n，输出它的前n行。
输入格式
     输入包含一个数n。
输出格式
     输出杨辉三角形的前n行。每一行从这一行的第一个数开始依次输出，中间使用一个空格分隔。
     请不要在前面输出多余的空格。
样例输入
4
样例输出
1
1 1
1 2 1
1 3 3 1
数据规模与约定
1 <= n <= 34。
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int triangle(int i, int j)
{
	if (j == 1 || j == i)//每行的第一个元素与每一行的最后一个元素
		return 1;
	else
		//a(i,j) = a(i - 1,j - 1)+a(i - 1, j);
		return triangle(i - 1, j - 1) + triangle(i - 1, j);
}
int main()
{
	int num = 0;
	cin >> num;
	for (int i = 1; i <= num; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout << triangle(i, j) << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
