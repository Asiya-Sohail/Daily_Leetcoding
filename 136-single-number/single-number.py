class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        #Bitwise XOR Approach
        xor = 0
        for i in range(len(nums)):
            xor = xor ^ nums[i]
            
        return xor
        