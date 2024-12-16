class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left , right;
        left = nums[0];
        for (int i=1; i<nums.size(); i++) {
            right = nums[i];
            if (left == right)
                return true;
            else;
                left = nums[i];
        }
        return false;
    }
};