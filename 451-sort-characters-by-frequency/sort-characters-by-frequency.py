class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        freq = {}
        for i in s:
            if i in freq:
                freq[i] += 1
            else:
                freq[i]  = 1
        freq = sorted(freq.items(), key = lambda i : freq[i[0]] , reverse=True)
        str = ""
        for x in freq:
            if x[1] > 1:
                for y in range(x[1]):
                    str += x[0]
            else : 
                str += x[0]
        return str