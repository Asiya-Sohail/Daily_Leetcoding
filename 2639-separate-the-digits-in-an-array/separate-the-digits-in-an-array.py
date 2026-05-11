class Solution(object):
    def separateDigits(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        # res = []
        # for num in nums:
        #     t = num
        #     temp = []
        #     while t > 0:
        #         temp.append(t%10)
        #         t = t // 10
        #     res.extend(temp[::-1])
        # return res

        result = []
        for n in nums:
            for i in str(n):
                result.append(int(i))
        return result