class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for (int n : nums)
            freq[n]++;
        
        priority_queue<pair<int, int>> maxHeap;
        for (auto& c : freq)
            maxHeap.push({c.second, c.first});

        vector<int> res;
        for (int i=0; i<k; i++){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;
    }
};