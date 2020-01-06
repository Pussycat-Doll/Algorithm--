#include<iostream>
#include<vector>
using namespace std;
//定义两个指针，一个慢指针走在后面，用来找0元素，一个快指针走在前面，用来找非零元素
//若两个都找都了就交换位置；注意：因为这个题目既要满足让0元素全部都移动到后面，又要满足所有的非零元素
//保持原来的顺序不变
void moveZeroes(vector<int>& nums)
{
    int firstindex = 0;//作为非零元素的末端
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != 0)
        {
            //看非零元素是否在尾端
            if (i != firstindex)//不在非零元素末端,放到非零元素末端，并让末端++
            {
                nums[firstindex++] = nums[i];
                nums[i] = 0;
            }
            else
            {
                firstindex++;
            }
        }
    }
}
int main()
{
    vector<int> nums = { 1,0 };
    moveZeroes(nums);
    return 0;
}