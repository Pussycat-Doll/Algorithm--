/*Sample Input
　　　　8 2 6 4 5 8 1 7 3
　　Sample Output
　　　　8227
　　　　 2 6 4 5 8 3 1 7
*/

#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int n, i, k, j, t, order[100];
    int lis, f[100], mid, h;
    f[0] = 1;
    for (i = 1; i <= 22; i++)
        f[i] = f[i - 1] * i;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &order[i]);
        if (n == 1)
            printf("0\n"); //此时下一个排列不存在 
        else if (n >= 2)
        {
            lis = 0;
            for (i = 0, k = n - 1; i < n - 1; i++, k--)
            {
                t = 0;
                for (j = 0; j < i; j++)
                    if (order[j] < order[i])    t++;
                lis += (order[i] - 1 - t) * f[k];
            }
            printf("%d\n", lis);
            for (i = n - 2; i >= 0; i--)
            {
                if (order[i] < order[i + 1])
                {
                    j = i;
                    for (k = n - 1; k > j; k--)
                    {
                        if (order[k] > order[j])
                        {
                            mid = j + (n - j) / 2;
                            swap(order[j], order[k]);
                            for (j++, h = 1; j <= mid; j++, h++)
                                swap(order[j], order[n - h]);
                        }
                    }
                    break;
                }
            }
            for (i = 0; i < n - 1; i++)
                printf("%d ", order[i]);
            printf("%d\n", order[i]);
        }
    }
    return 0;
}