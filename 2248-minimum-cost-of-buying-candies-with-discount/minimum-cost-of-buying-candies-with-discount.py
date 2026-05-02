class Solution(object):
    def minimumCost(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        cost.sort()
        lst = []
        for i, a in enumerate(cost):
            if (len(cost) - i) % 3:
                lst.append(a)
                
        return sum(lst)