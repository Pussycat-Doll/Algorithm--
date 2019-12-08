#define _CRT_SECURE_NO_WARNINGS 1
/*递归+斐波那契数列的变化版。
青蛙跳到n级的时候有如下跳法：

直接跳到1级，然后跳到剩下的n-1级
直接跳到2级，然后直接跳到的n-2级
...
直接跳到n级，然后就没然后了(0级)
f(n) = f(n-1) + f(n-2) + .. + f(0)
推导
f(n-1) = f(n-2) + .. + f(0)
因此
f(n) = 2 * f(n-1)

但是要注意的是n=1的时候直接只有1种跳法。直接f(1) = 1
*/
#include<iostream>
#include<cstdlib>
using namespace std;
int jumpFloorII(int number) {
	if (number == 1)
		return 1;
	else
		return 2*jumpFloorII(number - 1);
}
int main()
{
	int num;
	while (cin >> num)
	{
		cout << jumpFloorII(num) << endl;
	}
	system("pause");
	return 0;
}