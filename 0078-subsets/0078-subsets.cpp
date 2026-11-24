class Solution {
public:
    void solve(int index,vector<int>&nums,vector<vector<int>>&ans,vector<int>&current){
        if(nums.size()==index){
            ans.push_back(current);
            return;
        }
        solve(index+1,nums,ans,current);
        current.push_back(nums[index]);
        solve(index+1,nums,ans,current);
        current.pop_back();
     
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(0,nums,ans,curr);
        return ans;
    }
};