/*给定一个按照升序排列的整数数组 nums，和一个目标值 target。
找出给定目标值在数组中的开始位置和结束位置。

你的算法时间复杂度必须是 O(log n) 级别。
如果数组中不存在目标值，返回 [-1, -1]。

示例 1:

输入: nums = [5,7,7,8,8,10], target = 8
输出: [3,4]
示例 2:

输入: nums = [5,7,7,8,8,10], target = 6
输出: [-1,-1]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-first-and-last-position-of-element-in-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<vector>
using namespace std;

int binsearch(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size() - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] < target)
			left = mid + 1;
		if (nums[mid] > target)
			right = mid - 1;
		else
			return left;
	}
	return -1;
}
vector<int> searchRange(vector<int>& nums, int target) 
{
	vector<int> ve;
	int first = binsearch(nums, target);
	if (first == -1)
		return { -1,-1 };
	else
	{
		int second = binsearch(nums, target);
	}
}
int main()
{

	return 0;
}