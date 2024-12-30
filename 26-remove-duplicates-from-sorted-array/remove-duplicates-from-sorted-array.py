class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        left = 1 #write index
        for right in range(len(nums)): #read index
            if nums[right] != nums[left-1] :
                nums[left] = nums[right]
                left += 1
        return left
