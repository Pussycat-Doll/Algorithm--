
//·­×ªÒ»¿Ã¶þ²æÊ÷¡£
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    
};


class Solution {
public:
    TreeNode* invertTree(TreeNode* root)
    {
        if (root == nullptr)
            return nullptr;
        TreeNode* right = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(right);
        return root;
    }
};