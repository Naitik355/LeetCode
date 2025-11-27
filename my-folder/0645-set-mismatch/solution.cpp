class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        unordered_map<int,int> a;
        for(int n:nums){
            a[n]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(a[i]==2) ans[0]=i;
            if(a[i]==0) ans[1]=i;
        }
        return ans;
    }
};
