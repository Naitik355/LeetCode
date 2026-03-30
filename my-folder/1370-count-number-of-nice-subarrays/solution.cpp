class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return help(nums,k)-help(nums,k-1);
    }
    int help(vector<int>& nums,int k){
        int left=0;
        int right=0;
        int sum=0;
        int count=0;
        while(right<nums.size()){
            sum+=nums[right]%2;
            while(sum>k){
                sum-=nums[left]%2;
                left++;
            }
            count+=right-left+1;
            right++;
        }
        return count;
    }
};
