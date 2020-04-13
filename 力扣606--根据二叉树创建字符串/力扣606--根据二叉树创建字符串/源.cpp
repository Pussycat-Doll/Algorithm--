/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/*
class Solution {
public:
    void treestrpart(TreeNode* t, string& str)
    {
        if (t == nullptr)
            return;
        str += to_string(t->val);
        if (t->left || t->right)//左子树是否为空都要进去
        {
            str += "(";
            treestrpart(t->left, str);
            str += ")";
        }
        if (t->right)
        {
            str += "(";
            treestrpart(t->right, str);
            str += ")";
        }
    }
    string tree2str(TreeNode* t)
    {
        string str;
        treestrpart(t, str);
        return str;
    }
};*/