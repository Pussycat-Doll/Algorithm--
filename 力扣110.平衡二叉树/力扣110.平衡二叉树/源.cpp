/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };

class Solution {
public:
    int f = 0;
    int dfs(TreeNode* root)//计算该结点的高度以及平衡因子
    {
        if (root == NULL)
            return 0;
        int l = dfs(root->left);
        int r = dfs(root->right);
        if (abs(l - r) > 1)
            f = 1;
        return 1 + max(l, r);

    }
    bool isBalanced(TreeNode* root)
    {
        dfs(root);
        if (f == 1)
            return false;
        else
            return true;
    }
};*/