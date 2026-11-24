class Solution {
public:
    void helper(int index,vector<vector<int>>&ans,vector<int>&curr,int k,int n){
        if(curr.size()==k){
            ans.push_back(curr);
            return;
        }
        for(int i=index;i<=n;i++){
            curr.push_back(i);
            helper(i+1,ans,curr,k,n);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        vector<vector<int>>ans;
        helper(1,ans,curr,k,n);
        return ans;
    }
};