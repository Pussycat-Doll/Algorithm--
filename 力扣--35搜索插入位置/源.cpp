#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
    if (nums.size() == 0)
        return 0;

    int left = 0;
    int right = nums.size() - 1;
    int mid;
    if (nums[right] < target)
        return nums.size();
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (target <= nums[mid])
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
int main()
{

    return 0;
 }