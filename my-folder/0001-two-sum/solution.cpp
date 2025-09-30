class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                }
            }
        }
        return a;
    }
};
