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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0) return nullptr;
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }
    
private:
    TreeNode* sortedArrayToBST(vector<int> nums, int l, int r) {
        if (l > r) return nullptr;
        int mid = l + (r-l) / 2;

        TreeNode* root = new TreeNode(nums[mid]);
        root->left = sortedArrayToBST(nums, l, mid-1);
        root->right = sortedArrayToBST(nums, mid+1, r);
        return root;
    }
    // TreeNode* sortedArrayToBST(vector<int>& nums) {
        
    //     if (nums.size() == 0) return nullptr;

    //     int mid = nums.size() / 2;

    //     TreeNode* root = new TreeNode(nums[mid]);

    //     // Create the left and right subarrays
    //     vector<int> nums1(nums.begin(), nums.begin() + mid); //mid is excluded
    //     vector<int> nums2(nums.begin() + mid + 1, nums.end());
        
    //     root->left = sortedArrayToBST(nums1);
    //     root->right = sortedArrayToBST(nums2);

    //     return root;
    // }
};