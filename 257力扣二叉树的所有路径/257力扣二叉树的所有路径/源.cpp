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
    vector<string> ve;
    string path;
    vector<string> binaryTreePaths(TreeNode* root)
    {
        if (root == NULL)
            return ve;
        if (root->left == NULL && root->right == NULL)//遇到了叶子结点
        {
            path += to_string(root->val);
            ve.push_back(path);
            return ve;
        }
        //非叶子结点，将它的值加入路径中还需要加->
        path += to_string(root->val);
        path += "->";
        string path2 = path;//标记path的值,否则进入递归后改变当前结点的路径
        binaryTreePaths(root->left);
        path = path2;
        binaryTreePaths(root->right);
        path = path2;
        return ve;
    }
};*/