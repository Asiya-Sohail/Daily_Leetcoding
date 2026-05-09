class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # res = []
        # for i, x in enumerate(nums):
        #     check = set([y for j,y in enumerate(nums) if j !=i ])
        #     if target - x in check:
        #         nums[i] = True
        #         t = nums.index(target - x)
        #         return [i, t]
        # return []

        check = {}
        for i, x in enumerate(nums):
            if target - x in check:
                return [i, check[target-x]]
            check[x] = i
        return []