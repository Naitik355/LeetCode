class Solution {
public:
    void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&curr,vector<bool>&used){
        if(curr.size()==nums.size()){
            ans.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!used[i]){
                used[i]=true;
                curr.push_back(nums[i]);
                
                helper(nums,ans,curr,used);
                curr.pop_back();
                used[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<bool>used(nums.size(),false);
        vector<int>curr;
        helper(nums,ans,curr,used);
        return ans;
    }
};