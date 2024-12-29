class Solution {
public:
    int trap(vector<int>& height) {
        //Brute Force Approach (Time Limit Exceeded)
        // if (height.empty())
        //     return 0;
        // int res = 0;
        // for (int i = 0; i<height.size(); i++) {
        //     int left = height[i];
        //     int right = height[i];
        //     for (int j=0; j<i; j++) {
        //         left = max(left, height[j]);
        //     }
        //     for (int j=i+1; j<height.size(); j++) {
        //         right = max(right, height[j]);
        //     }
        //     res += min (left, right) - height[i];
        // }
        // return res;

        //Prefix and Suffix Arrays (Approach 2) 
        // if (height.empty())
        //     return 0;
        // int res = 0;
        // vector<int> left(height.size());
        // vector<int> right(height.size());

        // int max_no = INT_MIN; 
        // for (int i=0; i<height.size(); i++) {
        //     if (max_no < height[i])
        //         max_no = height[i];
        //     left[i] = max(max_no, height[i]);
        // }
        // max_no = INT_MIN;
        // for (int i = height.size() - 1; i >= 0; i--) {
        //     if (max_no < height[i])
        //         max_no = height[i];
        //     right[i] = max(max_no, height[i]);
        // }

        // for (int i=0; i<height.size(); i++) {
        //     res += min(left[i], right[i]) - height[i];
        // }

        // return res;

        // Prefix and Suffix Sum Arrays (Approach 3) 
        // if (height.empty())
        //     return 0;
        // int res = 0;
        // vector<int> left(height.size());
        // vector<int> right(height.size());

        // left[0] = height[0];
        // for (int i=1; i<height.size(); i++) {
        //     left[i] = max(left[i-1], height[i]);
        // }
        // right[height.size()-1] = height[height.size()-1];
        // for (int i = height.size() - 2; i >= 0; i--) {
        //     right[i] = max(right[i+1], height[i]);
        // }

        // for (int i=0; i<height.size(); i++) {
        //     res += min(left[i], right[i]) - height[i];
        // }

        // return res;

        //Two Pointers Approach (Approach 4)
        if (height.empty())
            return 0;
        int res = 0;
        int l = 0, r = height.size() - 1;
        int left = height[l];
        int right = height[r];
        while (l < r) {
            if (left < right){
                l++;
                left = max(left, height[l]);
                res += left - height[l];
            }
            else {
                r--;
                right = max(right, height[r]);
                res += right - height[r];
            }
        }
        return res;
    }
};