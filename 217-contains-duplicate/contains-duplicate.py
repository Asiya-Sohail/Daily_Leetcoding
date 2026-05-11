class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        freq = {}
        for i in nums:
            freq[i] = freq.get(i, 0) + 1
        for x in freq:
            if freq[x] > 1:
                return True
        return False

        