class Solution {
public:
    void solve(int index,vector<int>& candidates, int target,vector<vector<int>> &ans, vector<int> &curr){
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(curr);
            }
            return;
        }
        if(candidates[index]<=target){
            curr.push_back(candidates[index]);
            solve(index,candidates,target-candidates[index],ans,curr);
            curr.pop_back();
        }
        solve(index+1,candidates,target,ans,curr);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>curr;
        solve(0,candidates,target,ans,curr);     
        return ans;   
    }
};
