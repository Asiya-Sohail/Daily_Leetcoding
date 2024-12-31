class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        freq = {}
        for i in nums:
            if i not in freq:
                freq[i] = 1
            else :
                freq[i] += 1
        
        major = None 
        mx = - float('inf')
        for i in nums:
            if freq[i] > mx:
                mx = freq[i]
                major = i

        return major