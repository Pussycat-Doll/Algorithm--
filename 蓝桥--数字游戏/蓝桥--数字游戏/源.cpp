/*题目描述
栋栋正在和同学们玩一个数字游戏。

游戏的规则是这样的：栋栋和同学们一共n个人围坐在一圈。栋栋首先说出数字1。接下来，
坐在栋栋左手边的同学要说下一个数字2。再下面的一个同学要从上一个同学说的数字往下数两个数说出来，
也就是说4。下一个同学要往下数三个数，说7。依次类推。

为了使数字不至于太大，栋栋和同学们约定，当在心中数到  k-1  时，下一个数字从0开始数。
例如，当k=13时，栋栋和同学们报出的前几个数依次为：
1,  2,  4,  7,  11,  3,  9,  3,  11,  7。
  1   2   3   4    5   6   7   8    9
游戏进行了一会儿，栋栋想知道，到目前为止，他所有说出的数字的总和是多少。
样例说明
栋栋说出的数依次为1,  7,  9，和为17。
数据规模和约定
1  <   n,k,T  <   1,000,000；

输入
输入的第一行包含三个整数  n,k,T，其中  n  和  k  的意义如上面所述，T 表示到目前为止栋栋一共说出的数字个数。 
输出
输出一行，包含一个整数，表示栋栋说出所有数的和。 
样例输入
3 13 3
样例输出
17*/
/*
#include<iostream>
using namespace std;
int main()
{
	int n, k, T;
	cin >> n >> k >> T;
	long long sum = 0;
	long long start = 1;
	long long num = 1;
	while (T--)
	{
		sum += start;
		for (int i = 1; i <= n; ++i)
		{
			start += num;
			if (start > k - 1)
			{
				start = start - (k - 1) - 1;
			}
			++num;
		}
	}
	cout << sum << endl;
	return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
	long long n, k, T;
	cin >> n >> k >> T;
	long long l = 1, r = n;
	long long sum = 1, x = 1;
	for (long long i = 1; i < T; ++i)
	{
		x += (l+r)*n / 2;
		x %= k;
		sum += x;
		l = r + 1;
		r = n + r;
	}
	cout << sum << endl;
	return 0;
}