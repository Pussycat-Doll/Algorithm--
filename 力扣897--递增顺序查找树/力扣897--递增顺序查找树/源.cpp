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
//    void Inorder(TreeNode* root, vector<int>& ve)
//    {
//        if (root == nullptr)
//            return;
//        Inorder(root->left, ve);
//        ve.push_back(root->val);
//        Inorder(root->right, ve);
//    }
//    TreeNode* increasingBST(TreeNode* root)
//    {
//        vector<int> ve;
//        Inorder(root, ve);
//        TreeNode* newroot = new TreeNode(0), * cur = newroot;
//        for (auto e : ve)
//        {
//            cur->right = new TreeNode(e);
//            cur = cur->right;
//        }
//        return newroot->right;
//    }
//};