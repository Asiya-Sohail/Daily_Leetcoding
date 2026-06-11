class Solution(object):
    def f(self, n, r):
        if r[n] > 0:
            return r[n]
        if n <= 1:
            r[n] = n
            return n
        else:
            r[n] = self.f(n-1, r) + self.f(n-2, r)
            return r[n]

    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        r = [0] * (n+1)
        return self.f(n, r)
        