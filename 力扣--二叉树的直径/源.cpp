class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return max;
    }

    int maxDepth(TreeNode* root)
    {
        if (!root)
            return 0;
        int le = maxDepth(root->left);
        int ri = maxDepth(root->right);
        max = std::max(max, le + ri);
        return std::max(le, ri) + 1;
    }

private:
    int max = 0;
};