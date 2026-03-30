class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return help(nums,goal)-help(nums,goal-1);
    }


    int help(vector<int>& nums,int goal){
        int left=0;
        int right=0;
        int count=0;
        int sum=0;
        if(goal<0) return 0;
        while(right<nums.size()){
            sum=sum+nums[right];
            while(sum>goal){
                sum=sum-nums[left];
                left++;
            }
            count=count+(right-left+1);
            right++;
        }
        return count;
    }
};
