class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        arr.sort()
        minimum = 9999999999

        for i in range(1, len(arr)):
            minimum = min(minimum, arr[i]-arr[i-1])

        result = []

        for i in range(1, len(arr)):
            if arr[i] - arr[i-1] == minimum:
                result.append([arr[i-1], arr[i]])
            
        return result
        