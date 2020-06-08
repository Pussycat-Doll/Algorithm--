class Solution {
public:
    void inorder(vector<int>& res,TreeNode* root)
    {
        if(root == nullptr)
            return;
        inorder(res,root->left);
        res.push_back(root->val);
        inorder(res,root->right);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int> res;
        inorder(res,root);
        return res[k-1];
    }
};
