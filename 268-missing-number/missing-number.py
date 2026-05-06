class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # for i in range(len(nums)+1):
        #     if i not in nums:
        #         return i

        # return sum(i for i in range(len(nums)+1)) - sum(nums[i] for i in range(len(nums)))
        return sum(range(len(nums)+1)) - sum(nums)