class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i=1;i<=nums.size()+1;i++){
            int multiple=i*k;
            int j;
            for(j=0;j<nums.size();j++){
                if(nums[j]==multiple){
                    break;
                }
            }
            if(j==nums.size()) return multiple;
        }
        return 0;
    }
};
