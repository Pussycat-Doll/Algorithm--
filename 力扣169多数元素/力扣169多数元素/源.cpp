//class Solution {
//public:
//    int majorityElement(vector<int>& nums)//摩尔投票法，投我++，不投--，超过一半以上的人投我，那我稳赢
//    {
//        int times = 0;
//        int val = nums[0];
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (times == 0)
//                val = nums[i];
//            if (val == nums[i])
//                ++times;
//            else
//            {
//                --times;
//            }
//        }
//        return val;
//    }
//};
//
//int majorityElement(vector<int>& nums)//排序法
//{
//    sort(nums.begin(), nums.end());
//    return nums[nums.size() / 2];
//}