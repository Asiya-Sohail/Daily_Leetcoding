class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Two Pointers Approach (Hash Set Approach)
        // int target = 0, sum;
        // set<vector<int>> ans;
        // sort(nums.begin(), nums.end());
        // for (int i=0; i<nums.size(); i++) {
        //     int j = i + 1, k = nums.size() - 1;
        //     while (j < k) {
        //         sum = nums[i] + nums[j] + nums[k];
        //         if (sum == target) {
        //             ans.insert({nums[i] , nums[j] , nums[k]});
        //             j++; k--;
        //         }
        //         else if (sum > target) 
        //             k--;
        //         else 
        //             j++;
        //     }
        // }
        // vector<vector<int>> op;
        // for (auto i : ans) 
        //     op.push_back(i);
        // return op;

        //without set approach
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i=0; i<nums.size(); i++) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum < 0) 
                   j++;
                else if (sum > 0)
                    k--;
                else {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    int temp1 = j, temp2 = k;
                    while (j < k && nums[j] == nums[temp1]) j++;
                    while (j < k && nums[k] == nums[temp2]) k--;
                }
            }
            while (i+1 < nums.size() && nums[i] == nums[i+1]) i++;
        }
        return ans;
    }
};