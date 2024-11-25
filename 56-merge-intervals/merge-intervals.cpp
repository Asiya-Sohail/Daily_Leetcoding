class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        for (int i=0; i<n; i++) {
            int l = intervals[i][0];
            int h = intervals[i][1];
            
            while( i+1 < n && intervals[i+1][0] <= h){
                h = max(h, intervals[i+1][1]);
                i++;
            }
            
            vector<int> temp;
            temp.push_back(l);
            temp.push_back(h);
            ans.push_back(temp);
        }
        return ans;
    }
};