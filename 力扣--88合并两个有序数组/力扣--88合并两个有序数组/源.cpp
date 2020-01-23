/*给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。

说明:

初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
	int sub1 = m - 1;
	int sub2 = n - 1;
	int i = m + n - 1;
	while (sub1 >= 0 && sub2 >= 0)
	{
		if (nums1[sub1] > nums2[sub2])
			nums1[i--] = nums1[sub1--];
		else
			nums1[i--] = nums2[sub2--];
	}
	while (sub1 >= 0 && i >= 0)
	{
		nums1[i--] = nums1[sub1--];
	}
	while (sub2 >= 0 && i >= 0)
	{
		nums1[i--] = nums2[sub2--];
	}
}

int main()
{
	vector<int> a = { 0,0,0,0,0 };
	vector<int> b = { 1 };
	int m = 0;
	int n = 1;
	merge(a, m, b, n);
	return 0;
}