class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        #Brute Force Approach
        nums.sort()
        for i in range(1, len(nums)):
            if (nums[i-1] == nums[i]):
                return True
        return False
        # Set Approach
        # if (len(nums) != len(set(nums))):
        #     return True
        # else: 
        #     return False
        