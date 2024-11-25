class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxlen = 0, start = 0;
        for (int end = 0; end < nums.size(); end++) {
            while (nums[end] - nums[start] > 1) start++;
            if (nums[end] - nums[start] == 1) 
                maxlen = max(maxlen, end-start + 1);   
        }
        return maxlen;
    }
};