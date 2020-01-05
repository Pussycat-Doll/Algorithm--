#include<iostream>
#include<vector>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        int j = abs(nums[i]) - 1;// 如果nums[i]出现过，则nums[i] - 1也应该出现过，以此为下标
        if (nums[j] > 0)//如果存在过，就乘以负一，则证明 i+1 存在过
            nums[j] *= -1;
    }
    vector<int> ret;
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] > 0)
            ret.push_back(i + 1);
    }
    return ret;
}