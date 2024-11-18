/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> pre;
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == nullptr)
            return {};
        stack<TreeNode*> Node;
        Node.push(root);
        while(!Node.empty()) {
            TreeNode* n = Node.top();
            pre.push_back(n->val);
            Node.pop();

            if (n->right) Node.push(n->right);
            if (n->left) Node.push(n->left);
        }

        // if (root == nullptr)
        //     return {};
        // pre.push_back(root->val);
        // preorderTraversal(root->left);
        // preorderTraversal(root->right);
        return pre;
    }
};