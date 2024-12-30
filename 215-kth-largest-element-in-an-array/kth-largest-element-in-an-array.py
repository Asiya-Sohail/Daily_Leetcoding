class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort()
        # return nums[-k]
        return nums[len(nums) - k ]