class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int csum=nums[0];
        int msum=nums[0];
        for(int i=1;i<n;i++){
            csum=max(nums[i],csum+nums[i]);
            msum=max(msum,csum);
        }
        return msum;
    }
};
