class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        seen = {}
        for i in strs:
            s = "".join(sorted(i))
            # print(s)
            if s in seen.keys():
                seen[s].append(i)
            else:
                seen[s] = [i]
                # seen[s].append(i)

        lst = [y for x, y in seen.items()]
        return lst
        
        