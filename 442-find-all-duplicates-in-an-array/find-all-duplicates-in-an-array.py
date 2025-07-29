class Solution(object):
    def findDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        seen = set()
        duplicate = []
        for i in nums:
            if i in seen and i not in duplicate:
                duplicate.append(i)
            seen.add(i)
        return duplicate
        