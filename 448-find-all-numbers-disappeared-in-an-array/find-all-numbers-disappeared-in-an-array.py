class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # return [i for i in range(1, len(nums)+1) if i not in nums] O(n^2)
        check = {}
        res = []
        for i in range(1, len(nums)+1):
            check[str(i)] = 0

        for i in nums:
            check[str(i)] += 1

        return [int(key) for key, val in check.items() if val == 0 ]

        

        