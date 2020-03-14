/*class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum)
    {
        //从根节点开始，每当遇到一个节点的时候，从目标值里扣除节点值，
        一直到叶子节点判断目标值是不是被扣完。
        if (root == NULL)
            return false;
        sum -= root->val;
        if (root->left == NULL && root->right == NULL && sum == 0)
            return true;
        else
            return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
    }
};*/