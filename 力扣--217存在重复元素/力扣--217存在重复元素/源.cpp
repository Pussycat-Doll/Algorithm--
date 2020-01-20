/*给定一个整数数组，判断是否存在重复元素。

如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。*/
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

/*bool containsDuplicate(vector<int>& nums) 
{
	map<string,int> times;
	for (int i = 0; i < nums.size(); ++i)
	{
		if (nums[i] >= 0)
		{
			string s;
			s.append(1,nums[i] + '0');
			times[s]++;
		}
		else
		{
			int temp = -nums[i];
			string s;
			s += "-";
			s.append(1, nums[i] + '0');
			times[s]++;
		}
	}
	map<string,int> :: iterator it = times.begin();
	while (it != times.end())
	{
		if (it->second >= 2)
			return true;
		++it;
	}
	return false;
}*/

bool containsDuplicate(vector<int>& nums)
{
	if (nums.size() == 0)
		return false;
	sort(nums.begin(),nums.end());
	for (int i = 0; i < nums.size() - 1; ++i)
	{
		if (nums[i] == nums[i + 1])
			return true;
	}
	return false;
}
int main()
{
	vector<int> nums = { 0,1,2,3,4,-1,-1,-2,-3 };
	cout << containsDuplicate(nums) << endl;
	return 0;
}