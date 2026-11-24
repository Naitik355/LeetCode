class Solution {
public:
    void helper(int index,vector<int>&curr,vector<vector<int>>&ans,int k,int n){
        if(n==0 && curr.size()==k){
            ans.push_back(curr);
            return;
        }
        if(k==curr.size()){
            return;
        }
        for(int i=index;i<=9;i++){
            if(i<=n){
                curr.push_back(i);
                helper(i+1,curr,ans,k,n-i);
                curr.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>curr;
        helper(1,curr,ans,k,n);
        return ans;
    }
};