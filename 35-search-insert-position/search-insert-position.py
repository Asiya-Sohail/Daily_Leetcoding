class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        # length = len(nums)
        # for index, value in enumerate(nums):
        #     if target == value:
        #         return index
        #     elif index < length - 1:
        #         if value < target and  nums[index+1] > target:
        #             return index + 1
        #     else:
        #         if nums[length - 1] < target:
        #             return len(nums)
        #         else :
        #             return 0
        
        # Binary Search

        left, right = 0, len(nums) - 1
        while left <= right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                left = mid + 1
            else:
                right = mid - 1
        return left

