class Solution(object):
    def minimumCost(self, cost):
        """
        :type cost: List[int]
        :rtype: int
        """
        cost.sort(reverse=True)
        c = 0
        for i in range(len(cost)):
            if i % 3 != 2:
                c += cost[i]
        return c