class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        freq_s = {}
        freq_t = {}
        for i in s:
            freq_s[i] = freq_s.get(i, 0) + 1
        for i in t:
            freq_t[i] = freq_t.get(i, 0) + 1
        return freq_s == freq_t
        
        
        