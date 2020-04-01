/*题目描述
问题描述
有n个小朋友围坐成一圈。老师给每个小朋友随机发偶数个糖果，然后进行下面的游戏：
每个小朋友都把自己的糖果分一半给左手边的孩子。
一轮分糖后，拥有奇数颗糖的孩子由老师补给1个糖果，从而变成偶数。
反复进行这个游戏，直到所有小朋友的糖果数都相同为止。
你的任务是预测在已知的初始糖果情形下，老师一共需要补发多少个糖果。
输入
程序首先读入一个整数N(2< N< 100)，表示小朋友的人数。 
接着是一行用空格分开的N个偶数（每个偶数不大于1000，不小于2） 
输出
要求程序输出一个整数，表示老师需要补发的糖果数。
样例输入
3 
2 2 4 
样例输出
4*/
#include<iostream>
#include<vector>
using namespace std;
int sum;
void func1(vector<int>& arr)//分糖给左边
{
	arr[0] /= 2;
	int temp = arr[0];
	for (int i = 0; i < arr.size() - 1; ++i)
	{
			int s = (arr[i + 1] / 2);
			arr[i] += s;
			arr[i + 1]-=s;
	}
	arr[arr.size() - 1] += temp;
}
void func2(vector<int>& arr)//给奇数的孩子补糖
{
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] % 2 == 1)
		{
			++arr[i];
			++sum;
		}
	}
}
int main()
{
	int n;
	sum = 0;
	int flag = 0;
	cin >> n;
	vector<int> arr;
	while (n--)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}
	while (!flag)
	{
		for (int i = 0; i < arr.size() - 1; ++i)//先判断
		{
			if (arr[i] == arr[i + 1])
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
		func1(arr);
		func2(arr);	
	}
	cout << sum << endl;
	return 0;
}