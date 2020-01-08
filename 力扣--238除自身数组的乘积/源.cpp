/*给定长度为 n 的整数数组 nums，其中 n > 1，返回输出数组 output ，其中 output[i] 等于 nums 
中除 nums[i] 之外其余各元素的乘积。

示例:

输入: [1,2,3,4]
输出: [24,12,8,6]
说明: 请不要使用除法，且在 O(n) 时间复杂度内完成此题。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/product-of-array-except-self
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/



vector<int> productExceptSelf(vector<int>& nums)
{
    int size = nums.size();
    vector<int> ve;
    ve.resize(size, 1);
    int k = 1;
    for (int i = 0; i < size; ++i)//每个元素对应左乘之积
    {
        ve[i] = k;
        k *= nums[i];
    }
    k = 1;
    for (int i = size - 1; i >= 0; --i)//每个元素对应右乘之积
    {
        ve[i] *= k;
        k *= nums[i];
    }
    return ve;
}