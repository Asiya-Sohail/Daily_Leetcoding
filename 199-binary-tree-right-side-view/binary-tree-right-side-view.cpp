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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        
        queue<TreeNode*> q;
        vector<int> ans;
        q.push(root);
        
        while (!q.empty()){
            vector<int> temp;
            int size = q.size();
            for (int i=0; i<size; i++) {
                TreeNode* curr = q.front(); q.pop();
                temp.push_back(curr->val);
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);       
            }
            ans.push_back(temp[temp.size() - 1]);
        }
        return ans;        
    }
};