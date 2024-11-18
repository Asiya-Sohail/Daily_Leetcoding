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
    vector<int> post;
    void postorder(TreeNode* root) {
        if (root == nullptr) return;
        stack<TreeNode*> Node1, Node2;
        Node1.push(root);
        while(!Node1.empty()) {
            TreeNode* n = Node1.top();
            Node2.push(n);
            Node1.pop();

            if (n->left) Node1.push(n->left);
            if (n->right) Node1.push(n->right);
        }

        while (!Node2.empty()) {
            TreeNode* m = Node2.top();
            post.push_back(m->val);
            Node2.pop();
        }

        // if (root == nullptr)
        //     return;
        // postorder(root->left);
        // postorder(root->right);
        // post.push_back(root->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return post;        
    }
};