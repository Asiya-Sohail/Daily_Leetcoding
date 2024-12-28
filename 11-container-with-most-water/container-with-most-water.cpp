class Solution {
public:
    int maxArea(vector<int>& heights) {
        //Brute Force Approach (Time Limit Exceeded)
        // int max_area = INT_MIN;
        // for (int i=0; i<heights.size(); i++) {
        //     for (int j = i+1; j<heights.size(); j++) {
        //         int curr = min(heights[i], heights[j]) * (j - i);
        //         max_area = max(max_area, curr);
        //     }
        // }
        // return max_area;

        //Two Pointer Approach
        int l = 0, r = heights.size() - 1;
        int max_area = INT_MIN;
        for (int i=0; i<heights.size(); i++) {
            int curr = min(heights[l], heights[r]) * (r - l);
            max_area = max(max_area, curr);

            if (heights[l] > heights[r]) r--;
            else l++;
        }
        return max_area;
    }
};