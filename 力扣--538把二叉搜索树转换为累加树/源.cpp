/*给定一个二叉搜索树（Binary Search Tree），把它转换成为累加树（Greater Tree)，
使得每个节点的值是原来的节点值加上所有大于它的节点值之和。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/convert-bst-to-greater-tree
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。*/

//使得原来的中序遍历的左根右变换为右左根，因为是二叉搜索树，右边的数一定比跟和左边的数大
//所以要把右边的累加到根上，在累加到左边的数上；

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  };
 
class Solution {
public:

    void travel(TreeNode* root, int& sum)
    {
        if (root == nullptr)
            return;
        travel(root->right, sum);
        sum += root->val;
        root->val = sum;
        travel(root->left, sum);
    }

    TreeNode* convertBST(TreeNode* root)
    {
        int sum = 0;
        travel(root, sum);
        return root;
    }
};
