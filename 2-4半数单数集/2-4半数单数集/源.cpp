/*给定一个自然数n，由n 开始可以依次产生半数集set(n)中的数如下。
(1) n∈set(n)；
(2) 在n 的左边加上一个自然数，但该自然数不能超过最近添加的数的一半；
(3) 按此规则进行处理，直到不能再添加自然数为止。
例如，set(6)={6,16,26,126,36,136}。半数集set(6)中有6 个元素。
注意半数集是多重集。
对于给定的自然数n，计算半数集set(n)中的元素个数。
*/
#include<iostream>
using namespace std;
//半数集公式：set(n)=1+(set(1)+set(2)+...+set(n/2))
int set(int n)
{
	int sum = 1;
	for (int i = 1; i <= n / 2; ++i)
	{
		sum += set(i);
	}
	return sum;
}
int main()
{
	int n;
	while (cin >> n)
	{
		cout << set(n) << endl;
	}
	return 0;
}