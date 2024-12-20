class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Heap & Map Approach
        // map<int, int> mp;
        // priority_queue<pair<int, int>> pq;
        // for (int n : nums) 
        //     mp[n]++;
        // for (auto p : mp)
        //     pq.push({p.second, p.first});
        // vector<int> ans;
        // for (int i=0; i<k; i++){
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        // return ans;
        
        // Vector & Map Approach
        map<int, int> mp;
        for (int n : nums) 
            mp[n]++;
        vector<pair<int, int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        vector<int> ans;
        for (int i=0; i<k; i++) {
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
