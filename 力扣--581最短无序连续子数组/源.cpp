//给定一个整数数组，你需要寻找一个连续的子数组，如果对这个子数组进行升序排序，
//那么整个数组都会变为升序排序。
//
//你找到的子数组应是最短的，请输出它的长度。
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;

        int begin = -1;
        int end = -2;
        int maxval = nums[0];
        int minval = nums[nums.size() - 1];
        int j;
        for (int i = 0; i < nums.size(); ++i)
        {
            j = nums.size() - i - 1;
            maxval = max(maxval, nums[i]);
            minval = min(minval, nums[j]);

            if (nums[i] < maxval)
                end = i;
            if (nums[j] > minval)
                begin = j;
        }
        return end - begin + 1;
    }

};