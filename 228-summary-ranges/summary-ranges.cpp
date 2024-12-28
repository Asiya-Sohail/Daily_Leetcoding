class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if (nums.empty()) return ans;

        int curr = 0;
        for (int i=1; i<=nums.size(); i++) {
            if (i == nums.size() || nums[i-1] + 1 != nums[i]){
                if (curr == i - 1)
                    ans.push_back(to_string(nums[curr]));
                else 
                    ans.push_back(to_string(nums[curr]) + "->" + to_string(nums[i-1]));
                curr = i;
            }
        }
        return ans;
    }
};