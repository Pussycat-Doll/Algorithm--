//class Solution {
//public:
//    int maxProfit(vector<int>& prices)
//    {
//        int Maxprofit = 0;
//        for (int i = 1; i < prices.size(); ++i)
//        {
//            Maxprofit += max(prices[i] - prices[i - 1], 0);
//        }
//        return Maxprofit;
//    }
//};