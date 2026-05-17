class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        d = {')':'(', '}':'{', ']':'['}
        check = []
        for i in s:
            if i in '({[':
                check.append(i)
            elif len(check) > 0 and check[-1] == d[i]:
                check.pop()
            else:
                return False

 
        if len(check) != 0:
            return False
        else:
            return True

                