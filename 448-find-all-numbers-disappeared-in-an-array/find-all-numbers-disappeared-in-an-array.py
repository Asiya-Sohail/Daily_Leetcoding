class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length = len(nums)
        result = []
        set_nums = set(nums)
        for i in range(1, length+1):
            if i not in set_nums:
                result.append(i)
        return result