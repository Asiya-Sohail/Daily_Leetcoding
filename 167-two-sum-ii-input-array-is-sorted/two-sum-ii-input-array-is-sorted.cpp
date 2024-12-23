class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        vector<int> vec(2);
        for (int i=0; i<numbers.size(); i++) {
            int sum = numbers[left] + numbers[right];
            if (sum == target) {
                vec[0] = left+1;
                vec[1] = right+1;
            }
            else if (sum > target) 
                right--;
            else 
                left++;
        }
        return vec;
    }
};