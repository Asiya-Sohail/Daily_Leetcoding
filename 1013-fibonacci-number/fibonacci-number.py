class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n <= 1:
            return n

        # fibonacci = [0, 1]
        # for i in range(2, n+1):
        #     fibonacci.append(fibonacci[i-1] + fibonacci[i-2])

        # return fibonacci[n]
        
        a, b = 0, 1
        for _ in range(2, n+1):
            a, b = b, a+b
        return b