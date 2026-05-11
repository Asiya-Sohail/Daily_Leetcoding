class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        
        i, j = len(num1)-1, len(num2)-1
        carry = 0
        result = []
        while i>=0 or j >=0 or carry:
            total = carry
            if i>=0:
                total += (ord(num1[i])-ord('0'))
                i -= 1
            if j >=0:
                total += (ord(num2[j])-ord('0'))
                j -= 1
            
            result.append(str(total % 10))
            carry = total // 10
        return ''.join(result[::-1])
        