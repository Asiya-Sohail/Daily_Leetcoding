class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign = False
        if x < 0:
            sign = True
        n = abs(x) 
        r = 0
        INT_MAX = 2**31 - 1
        while (n!=0):
            digit = n % 10
            if r > INT_MAX // 10 or (r == INT_MAX // 10 and digit > 7):
                return 0
            r = r*10 + digit
            n //=10
        
        if sign:
            return -r
        else:
            return r