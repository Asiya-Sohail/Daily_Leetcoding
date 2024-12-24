class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Brute Force Approch (Not accepted)
        //Use Heap DS
        if (nums.empty()) 
            return 0;
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(), nums.end());
        int longest = 1, current = 1;
        int prev = pq.top();
        pq.pop();
        while (! pq.empty()) {
            int curr = pq.top(); pq.pop();
            if (curr == prev+1)
                current++;
            else if (curr != prev) {
                longest = max(longest, current);
                current = 1;
            }
            prev = curr;
        }
        
        return max(longest, current);
    }
};