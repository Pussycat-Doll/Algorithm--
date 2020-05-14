/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    int maxDepth(Node* root)
    {
        if (root == nullptr)
            return 0;
        int dep = 0;
        queue<Node*> depth;
        depth.push(root);
        Node* tail = root;
        Node* last = nullptr;
        while (!depth.empty())
        {
            Node* node = depth.front();
            depth.pop();
            for (int i = 0; i < node->children.size(); ++i)
            {
                depth.push(node->children[i]);
                last = node->children[i];
            }
            if (node == tail)
            {
                tail = last;
                ++dep;
            }
        }
        return dep;
    }
};*/