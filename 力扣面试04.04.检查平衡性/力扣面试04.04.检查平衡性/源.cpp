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
    int depth(TreeNode* root)
    {
        if (root == nullptr)
            return 0;
        int left = depth(root->left);
        int right = depth(root->right);
        return max(left, right) + 1;

    }
    bool isBalanced(TreeNode* root)
    {
        if (root == nullptr)
            return true;
        if (abs(depth(root->left) - depth(root->right)) <= 1)
            return isBalanced(root->left) && isBalanced(root->right);
        return false;
    }
};*/