#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{

	int num;
	while (cin >> num)
	{
		int result;
		if (num == 0)
			result = 0;
		else if (num == 1)
			result = 1;
		else if (num == 2)
			result = 2;
		else
		{
			int *dp = new int[num + 1];
			dp[1] = 1;
			dp[2] = 2;
			dp[3] = 3;

			for (int i = 4; i <= num; ++i)
			{
				int max_cur = 1;
				for (int j = 1; j <= i / 2; ++j)
				{
					if (dp[j] * dp[i - j] > max_cur)
						max_cur = dp[j] * dp[i - j];
				}
				dp[i] = max_cur;
			}
			result = dp[num];
		}
		cout << result << endl;
	}
	return 0;
}