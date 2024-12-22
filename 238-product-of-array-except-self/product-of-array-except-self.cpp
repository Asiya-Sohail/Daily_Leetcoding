class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //Map technique (Not accepted, Brute force will also not be accepted)
        //   vector<int> op(nums.size());
        //   unordered_map<int, int> mp;
        //   for (int i=0; i<nums.size(); i++) {
        //       mp[i] = 1;
        //   }
        
        //for (int i = 0; i<nums.size(); i++) {
        //       for (int j=0; j<nums.size(); j++) {
        //           if (i == j) continue;
        //           mp[i] *= nums[j];
        //       }
        //   }
        //   for (int i=0; i<nums.size(); i++) {
        //       op[i] = mp[i];
        //   }
        
        //return op;
        
        //Prefix , Suffix technique
        int curr = 1;
        vector<int> opt(nums.size());
        vector<int> pre(nums.size());
        vector<int> suf(nums.size());

        pre[0] = 1;
        for (int i=1; i<nums.size(); i++) {
            pre[i] = pre[i-1] * nums[i-1];
        }

        suf[nums.size() - 1] = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            suf[i] = suf[i+1] * nums[i+1];
        }

        for (int i=0; i<nums.size(); i++) {
            opt[i] = pre[i] * suf[i];
        }
        return opt;
        
    }
};