class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        # lst = s.split()
        # lst = [i[::-1] for i in lst]
        # return " ".join([i[::-1] for i in s.split()])
        words = s.split(" ")
        reversed_words = []
        for i in words:
            reverse = i[::-1]
            reversed_words.append(reverse)
        return " ".join(reversed_words)
