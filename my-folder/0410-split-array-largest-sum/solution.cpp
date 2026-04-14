class Solution {
public:
    int split(vector<int>& nums,int n){
        int number=1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=n){
                sum+=nums[i];
            }
            else{
                number++;
                sum=nums[i];
            }
        }
        return number;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int number=split(nums,mid);
            if(number>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
