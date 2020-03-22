/*问题描述
　　在数列 a[1], a[2], ..., a[n] 中，如果对于下标 i, j, k 满足 0<i<j<k<n+1 且 a[i]<a[j]<a[k]，
  则称 a[i], a[j], a[k] 为一组递增三元组，a[j]为递增三元组的中心。
　　给定一个数列，请问数列中有多少个元素可能是递增三元组的中心。
输入格式
　　输入的第一行包含一个整数 n。
　　第二行包含 n 个整数 a[1], a[2], ..., a[n]，相邻的整数间用空格分隔，表示给定的数列。
输出格式
　　输出一行包含一个整数，表示答案。
样例输入
5
1 2 5 3 5
样例输出
2
样例说明
　　a[2] 和 a[4] 可能是三元组的中心。
评测用例规模与约定
　　对于 50% 的评测用例，2 <= n <= 100，0 <= 数列中的数 <= 1000。
　　对于所有评测用例，2 <= n <= 1000，0 <= 数列中的数 <= 10000。
*/
#include<iostream>
#include<vector>
using namespace std;

int func(vector<int> ve)
{
    int num = 0;
    int times = 0;
    for (int i = 1; i < ve.size() - 1; ++i)
    {
        num = 0;
        for (int j = 0; j < i; ++j)
        {
            if (ve[j] < ve[i])
            {
                ++num;
                break;
            }
        }
        for (int k = i + 1; k < ve.size(); ++k)
        {
            if (ve[k] > ve[i])
            {
                ++num;
                break;
            }
        }
        if (num == 2)
            ++times;
    }
        return times;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ve;
    int x;
    while (n--)
    {
        cin >> x;
        ve.push_back(x);
    }

    cout << func(ve) << endl;
    return 0;
}