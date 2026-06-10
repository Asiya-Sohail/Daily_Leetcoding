class Solution(object):
    def nextGreaterElement(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        # ans = []
        # for i in nums1:
        #     idx = nums2.index(i)
        #     found = False
        #     for j in range(idx+1, len(nums2)):
        #         if nums2[j] > i:
        #             ans.append(nums2[j])
        #             found = True
        #             break
        #     if not found:
        #         ans.append(-1)
        # return ans
        ng = {}
        st = []
        for num in reversed(nums2):
            while st and st[-1] <= num:
                st.pop()
            ng[num] = -1 if not st else st[-1]
            st.append(num)
        return [ng[num] for num in nums1]