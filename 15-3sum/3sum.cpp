class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Two Pointers Approach
        int target = 0, sum;
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    ans.insert({nums[i] , nums[j] , nums[k]});
                    j++; k--;
                }
                else if (sum > target) 
                    k--;
                else 
                    j++;
            }
        }
        vector<vector<int>> op;
        for (auto i : ans) 
            op.push_back(i);
        return op;
    }
};