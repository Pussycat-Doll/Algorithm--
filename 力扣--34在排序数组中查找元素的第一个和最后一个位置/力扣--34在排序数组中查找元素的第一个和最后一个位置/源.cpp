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

vector<int> searchRange(vector<int>& nums, int target) 
{
	int left = 0;//找左边界
	int right = nums.size();
	vector<int> res;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (nums[mid] < target)
			left = mid + 1;
		else 
			right = mid;
	}
	if ( left == nums.size() || nums[left] != target)
		return { -1,-1 };
	if (nums[left] == target) 
		res.push_back(left);
	right = nums.size();
	while (left < right)//找友边界
	{
		int mid = (left + right) / 2;
		if (target >= nums[mid])
			left = mid + 1;
		else
			right = mid;
	}
	if (nums[right - 1] == target)
		res.push_back(right - 1);
	return res;
}
int main()
{

	return 0;
}