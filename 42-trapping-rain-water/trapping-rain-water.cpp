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

        //Prefix and Suffix Sum Arrays
        if (height.empty())
            return 0;
        int res = 0;
        vector<int> left(height.size());
        vector<int> right(height.size());

        int max_no = INT_MIN; 
        for (int i=0; i<height.size(); i++) {
            if (max_no < height[i])
                max_no = height[i];
            left[i] = max(max_no, height[i]);
        }
        max_no = INT_MIN;
        for (int i = height.size() - 1; i >= 0; i--) {
            if (max_no < height[i])
                max_no = height[i];
            right[i] = max(max_no, height[i]);
        }

        for (int i=0; i<height.size(); i++) {
            res += min(left[i], right[i]) - height[i];
        }

        return res;
    }
};