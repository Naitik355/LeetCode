class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        n = len(nums)
        if n < 3:
            return 0 
        max_left = nums[0]  
        max_right = [0] * n 
        max_value = float('-inf')
        for i in range(n - 1, -1, -1):
            max_value = max(max_value, nums[i])
            max_right[i] = max_value

        max_result = 0
    
        for j in range(1, n - 1):
            max_left = max(max_left, nums[j - 1])
            max_k = max_right[j + 1]  
            
            triplet_value = (max_left - nums[j]) * max_k
            max_result = max(max_result, triplet_value)
        
        return max_result


