/*给定一组不含重复元素的整数数组 nums，返回该数组所有可能的子集（幂集）。

说明：解集不能包含重复的子集。*/


#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> subsets(vector<int>& nums) 
{
	vector<vector<int>> res(1);
	for (int i = 0; i < nums.size(); ++i)
	{
		int sz = res.size();
		for (int j = 0; j < sz; ++j)
		{
			vector<int> tm = res[j];
			tm.push_back(nums[i]);
			res.push_back(tm);
		}
	}
	return res;
}

int main()
{

	return 0;
}