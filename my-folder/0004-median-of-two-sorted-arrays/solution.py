class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in nums2:
            nums1.append(i)
        nums1.sort()
        n=len(nums1)
        if len(nums1)%2==0:
            a=n//2
            return((nums1[a-1]+nums1[a])/2)
        elif len(nums1)%2!=0:
            a=n//2
            return nums1[a]

