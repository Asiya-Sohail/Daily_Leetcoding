class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute Force
        // for (int i=0; i<nums.size(); i++) {
        //     for (int j=0; j<nums.size(); j++) {
        //         if (i == j) 
        //             continue;
        //         if ((nums[i] + nums[j]) == target)
        //             return {i, j};
        //     }
        // }
        // return {};
        
        //Map
        unordered_map<int, int> map;
        for (int i=0; i<nums.size(); i++) {
            int diff = target - nums[i];
            if (map.find(diff) != map.end()) {
                return {map[diff], i};
            }
            map[nums[i]] = i;
        }

        return {};
    }
};