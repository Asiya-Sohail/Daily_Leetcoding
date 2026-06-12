class Solution(object):
    def __init__(self):
        # This constructor initializes your data structures here
        self.r = [0] * 38

    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        if self.r[n] > 0:
            return self.r[n]
        if n == 0:
            return 0
        if n == 1 or n == 2:
            return 1

        self.r[n] = self.tribonacci(n-1) + self.tribonacci(n-2) + self.tribonacci(n-3)
        return self.r[n]
        