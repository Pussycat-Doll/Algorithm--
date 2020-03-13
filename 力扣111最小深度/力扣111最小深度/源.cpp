#include<iostream>
#include<queue>
using namespace std;

 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

   /* int minDepth(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        if (root->left == NULL || root->right == NULL)//判断是否是叶子结点
            return  l == 0 ? ++r : ++l;
        return 1 + min(l, r);
    }*/
    int minDepth(TreeNode* root)
    {
        queue<TreeNode*> tr;
        int times = 0;
        if (root == nullptr)
            return 0;
        tr.push(root);
        times = 1;
        while (!tr.empty())
        {
            TreeNode* cur = tr.front();
            tr.pop();
            if (cur->left == nullptr && cur->right == nullptr)
                return times;
            else
            {
                if (cur->left != nullptr)
                    tr.push(cur->left);
                if (cur->right != nullptr)
                    tr.push(cur->right);
                ++times;
            }
        }
    }


int main()
{
    TreeNode* root = new TreeNode(10);
    TreeNode* righ = new TreeNode(11);
    root->right = righ;
    cout<<minDepth(root);
    return 0;
}
