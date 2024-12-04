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
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        
        int left = (root->left) ? minDepth(root->left) : 0;
        int right = (root->right) ? minDepth(root->right) : 0;
        
        if (!root->left) return 1 + right;
        if (!root->right) return 1 + left;
        
        return 1 + min(left, right);
    }
};