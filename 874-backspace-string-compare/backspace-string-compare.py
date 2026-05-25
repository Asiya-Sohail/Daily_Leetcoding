class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        def F(s):
            skip = 0
            for i in reversed(s):
                if i == '#':
                    skip += 1
                elif skip:
                    skip -= 1
                else:
                    yield i
        
        return all(x==y for x,y in itertools.izip_longest(F(s), F(t)))