class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        # Set Approach
        if (len(nums) != len(set(nums))):
            return True
        else: 
            return False
        