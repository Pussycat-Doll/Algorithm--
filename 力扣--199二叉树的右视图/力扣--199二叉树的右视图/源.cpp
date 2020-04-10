#include<iostream>
#include<vector>
#include<queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
};
vector<int> rightSideView(TreeNode* root)
{
    if (root == nullptr)
        return {};
    queue<TreeNode *> tr;
    tr.push(root);
    vector<int> result;
    while (!tr.empty())
    {
        int n = tr.size();
        for (int i = 1; i <= n; ++i)
        {
            TreeNode* p = tr.front();
            tr.pop();
            if (i == n)
                result.push_back(p->val);
            if (p->left)
                tr.push(p->left);
            if (p->right)
                tr.push(p->right);
        }       
    }
    return result;
}