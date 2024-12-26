class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Two Pointers Approach
        int n = numbers.size();
        int left = 0, right = n - 1;
        vector<int> ans(2);
        for (int i=0; i<n; i++) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                ans[0] = left+1;
                ans[1] = right+1;
            }
            else if (sum > target) 
                right--;
            else 
                left++;
        }
        return ans;
    }
};