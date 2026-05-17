class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        minimum = min(strs, key=len)
        while minimum and not all(i.startswith(minimum) for i in strs):
            minimum = minimum[:-1]
        if minimum:
            return minimum
        else:
            return ''