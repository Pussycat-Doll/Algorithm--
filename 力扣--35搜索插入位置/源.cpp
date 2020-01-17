#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchInsert(vector<int>& nums, int target) 
{
    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == target)
            return i;
    }
    vector<int>::iterator it = nums.begin();
    while (it != nums.end())
    {
        if (*it > target)
        {
            nums.insert()
        }
    }
}
int main()
{

    return 0;
 }