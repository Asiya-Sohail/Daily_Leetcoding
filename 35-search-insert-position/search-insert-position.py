class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        length = len(nums)
        for index, value in enumerate(nums):
            if target == value:
                return index
            elif index < length - 1:
                if value < target and  nums[index+1] > target:
                    return index + 1
            else:
                if nums[length - 1] < target:
                    return len(nums)
                else :
                    return 0
