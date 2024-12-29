class Solution(object):
    def targetIndices(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # Brute Force Approach
        # nums.sort() # n log n complexity
        # result = []
        # for i in range(0, len(nums)):
        #     if (target == nums[i]):
        #         result.append(i)
        # return result

        # Two Count Approach
        target_count = 0
        target_less = 0
        for i in range(0, len(nums)):
            if nums[i] < target:
                target_less += 1
            if nums[i] == target:
                target_count += 1
        
        return [i for i in range(target_less, target_less + target_count)]
        