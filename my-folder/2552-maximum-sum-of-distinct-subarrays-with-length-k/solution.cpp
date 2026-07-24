class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int left=0;
        long long maxSum=0;
        unordered_map<int,int>freq;
        long long sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            freq[nums[right]]++;
            if(right-left+1==k){
                if(freq.size()==k){
                    maxSum=max(sum,maxSum);
                }
                freq[nums[left]]--;
                if(freq[nums[left]]==0) freq.erase(nums[left]);
                sum-=nums[left];
                left++;
            }
        }
        return maxSum;
    }
};
