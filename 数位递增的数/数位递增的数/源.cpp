/*问题描述
　　一个正整数如果任何一个数位不大于右边相邻的数位，则称为一个数位递增的数，例如1135是一个数位递增的数，
  而1024不是一个数位递增的数。
　　给定正整数 n，请问在整数 1 至 n 中有多少个数位递增的数？
输入格式
　　输入的第一行包含一个整数 n。
输出格式
　　输出一行包含一个整数，表示答案。
样例输入
30
样例输出
26
评测用例规模与约定
　　对于 40% 的评测用例，1 <= n <= 1000。
　　对于 80% 的评测用例，1 <= n <= 100000。
　　对于所有评测用例，1 <= n <= 1000000。*/
#include<iostream>
using namespace std;
bool func(int num, int n)
{
    if (num == 0)
        return true;
    int m = num % 10;
    if (n >= m)
        return func(num / 10, m);
    else
        return false;
}
int main()
{
    int num;
    while (cin >> num)
    {
        int times = 0;
        for (int i = 1; i <= num; ++i)
        {
            int n = i % 10;
            if (func(i, n))
                ++times;
        }
            cout << times<<endl;
    }
    return 0;
}