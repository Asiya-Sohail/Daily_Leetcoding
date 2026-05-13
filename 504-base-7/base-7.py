class Solution(object):
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return '0'
        sign = False
        if num < 0:
            sign = True
        num = abs(num)
        res = ''
        while num > 0:
            t = num % 7
            num //= 7
            res += str(t)
        if sign:
            return '-' + res[::-1]
        else:
            return res[::-1]

        