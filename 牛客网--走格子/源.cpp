#include<iostream>
using namespace std;
int sum(int m, int n)
{
    //dp[0][0] = 0;
    //for (int i = 0; i < n; ++i)
    //    dp[m][0] = 1;
    //for (int j = 0; j < m; ++j)
    //    dp[0][n] = 1;
    //for (int i = 1; i < m; ++i)
    //{
    //   for (int j = 1; j < n; ++j)
    //   {
    //        dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
    //   }
    //}
    //return dp[m-1][n-1];
    if (m == 1 || n == 1)
        return 1;
        int total = sum(m - 1, n) + sum(m, n - 1);
    return total;
   
}
int main()
{
    int m, n;
    while (cin >> m >> n)
    {
        cout << sum(m, n) << endl;
    }
    return 0;
}