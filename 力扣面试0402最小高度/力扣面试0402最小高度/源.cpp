///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//    TreeNode* dfs(vector<int>& nums, int left, int right)
//    {
//        if (left > right)
//            return nullptr;
//        int mid = (left + right) >> 1;
//        TreeNode* ptr = new TreeNode(nums[mid]);//填充根结点
//        ptr->left = dfs(nums, left, mid - 1);//填充左子树
//        ptr->right = dfs(nums, mid + 1, right);//构造右子树
//        return ptr;
//    }
//    TreeNode* sortedArrayToBST(vector<int>& nums)
//    {
//        return dfs(nums, 0, nums.size() - 1);
//    }
//};