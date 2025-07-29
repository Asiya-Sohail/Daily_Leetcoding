class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        # lst = s.split()
        # lst = [i[::-1] for i in lst]
        return " ".join([i[::-1] for i in s.split()])