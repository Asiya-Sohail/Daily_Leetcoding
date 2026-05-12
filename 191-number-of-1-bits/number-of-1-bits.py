class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        # binary = bin(n)
        # return binary[2:].count('1')
        count = 0
        while n:
            if n%2 == 1:
                count += 1
            n //= 2
        return count