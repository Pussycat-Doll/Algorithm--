#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//原始数组:               1 2 3 4 5 6 7
//反转所有数字后:         7 6 5 4 3 2 1
//反转前 k 个数字后 :     5 6 7 4 3 2 1
//反转后 n - k 个数字后 : 5 6 7 1 2 3 4 -- > 结果

void rotate(vector<int>& nums, int k)
{
    if (nums.empty() || k % nums.size() == 0)
        return;
    k = k % nums.size();//防止越界
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse((nums.end() - nums.size() + k), nums.end());
}
int main()
{

	return 0;
}
