#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int last = 0, profit = 0;
    for (int i = 0; i < (int)prices.size() - 1; ++i) {
        last = max(0, last + prices[i + 1] - prices[i]);
        profit = max(profit, last);
    }
    return profit;
}

int main()
{
    vector<int> prices = { 7,1,5,3,6,4 };
    cout << maxProfit(prices) << endl;
	return 0;
}