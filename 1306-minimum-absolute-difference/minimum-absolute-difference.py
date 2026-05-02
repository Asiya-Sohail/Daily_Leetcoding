class Solution(object):
    def minimumAbsDifference(self, arr):
        """
        :type arr: List[int]
        :rtype: List[List[int]]
        """
        arr.sort()
        minimum = 9999999999
        left = 0
        right = 1
        for i in range(len(arr)-1):
            val = arr[right] - arr[left] 
            if val <= minimum:
                minimum = val
            left += 1
            right += 1
        result = []
        left = 0
        right = 1
        
        for i in range(len(arr)-1):
            if arr[right] - arr[left] == minimum:
                result.append([arr[left], arr[right]])
            left += 1
            right += 1

        return result
        