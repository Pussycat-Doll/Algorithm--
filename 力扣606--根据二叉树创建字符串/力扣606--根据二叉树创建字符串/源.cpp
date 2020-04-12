/*
class Solution {
public:
    void _tree2str(TreeNode* t, string& str)
    {
        if (t == nullptr)
            return;

        str += to_string(t->val);
        if (t->left || t->right)
        {
            str += '(';
            _tree2str(t->left, str);
            str += ')';
        }

        if (t->right)
        {
            str += '(';
            _tree2str(t->right, str);
            str += ')';
        }
    }

    string tree2str(TreeNode* t) {
        string str;
        _tree2str(t, str);

        return str;
    }
};*/