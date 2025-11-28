class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int n:nums){
            mp[n]++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(mp[i]==0) ans.push_back(i);
        }
        return ans;
    }
};
