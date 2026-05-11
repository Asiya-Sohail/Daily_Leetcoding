class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        freq = {}
        for s in strs:
            sort = ''.join(sorted(s))
            if sort in freq:
                freq[sort].append(s)
            else:
                freq[sort] = [s]

        res = []
        for i in freq:
            res.append(freq[i])
        return res

        