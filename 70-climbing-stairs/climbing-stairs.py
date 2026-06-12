class Solution(object):
    def __init__(self):
        # This constructor initializes your data structures here
        self.r = [0] * 46

    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if self.r[n] > 0:
            return self.r[n]

        if n == 0 or n == 1:
            return 1

        self.r[n] = self.climbStairs(n-1) + self.climbStairs(n-2) 
        return self.r[n] 