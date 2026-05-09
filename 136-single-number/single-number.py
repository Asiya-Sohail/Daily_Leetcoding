class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <= 2:
            return nums[0]

        # nums.sort()
        # i=0
        # while  (i < len(nums)-1):
        #     if nums[i] != nums[i+1]:
        #         return nums[i]
        #     else:
        #         i += 1
        #     i+=1
        # return nums[-1]

        res = 0
        for num in nums:
            res ^= num
        return res