class Solution(object):
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # nums.sort(reverse=True)
        # if len(nums) <= 2:
        #     return min(nums)
        # maximum = [min(nums[0], nums[1])]
        # for i in range(2, len(nums)-1):
            
        #     if (nums[i+1]):
        #         maximum.append(min(nums[i],nums[i+1]))
        #     else:
        #         maximum.append(nums[i])

        # return sum(maximum)
        nums.sort()
        res = 0
        for i in range(0, len(nums), 2):
            res += nums[i]
        return res
        