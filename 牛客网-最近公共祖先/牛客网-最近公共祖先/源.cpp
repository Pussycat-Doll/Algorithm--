#define _CRT_SECURE_NO_WARNINGS 1
/*链接：https://www.nowcoder.com/questionTerminal/70e00e490b454006976c1fdf47f155d9
来源：牛客网

有一棵无穷大的满二叉树，其结点按根结点一层一层地从左往右依次编号，根结点编号为1。现在有两个结点a，b。请设计一个算法，求出a和b点的最近公共祖先的编号。

给定两个int a,b。为给定结点的编号。请返回a和b的最近公共祖先的编号。注意这里结点本身也可认为是其祖先。

测试样例：
2，3
返回：1*/
#include<iostream>
using namespace std;

int getLCA(int a, int b) {
	if (a / 2 == b / 2)//a,b的结点为同一个
		return a / 2;
	else if (a > b + 1 || a + 1 > b)
		return getLCA(a / 2, b);
	else
		return getLCA(a, b / 2);
}
int main()
{
	cout << getLCA(9, 7) << endl;
	system("pause");
	return 0;
}