class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        double average=0;
        double maxAverage=INT_MIN;
        int sum=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            if(right-left+1==k){
                average=(double)sum/k;
                maxAverage=max(maxAverage,average);
                sum-=nums[left];
                left++;
            }
        }
        return maxAverage;
    }
};
