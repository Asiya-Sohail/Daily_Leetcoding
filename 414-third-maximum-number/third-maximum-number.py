class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        n = len(nums)
        nums.sort()
        prev = -float('inf')
        count = 0
        for i in range(n):
            if (nums[n-i - 1] != prev):
                prev = nums[n - i - 1]
                count += 1
            if count == 3:
                return nums[n - i - 1]
        
        return nums[n - 1]
            