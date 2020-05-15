///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
//
//class Solution {
//public:
//    vector<int> leaflist(TreeNode* root)
//    {
//        if (root == nullptr)
//            return {};
//        stack<TreeNode*> node;
//        vector<int> ve;
//        node.push(root);
//        while (!node.empty())
//        {
//            TreeNode* cur = node.top();
//            node.pop();
//            if (!cur->left && !cur->right)
//                ve.push_back(cur->val);
//            if (cur->right)
//                node.push(cur->right);
//            if (cur->left)
//                node.push(cur->left);
//        }
//        return ve;
//    }
//    bool leafSimilar(TreeNode* root1, TreeNode* root2)
//    {
//        return leaflist(root1) == leaflist(root2);
//    }
//};