class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int n=1;
        while(s.find(n)!=s.end()){
            n++;
        }
        return n;
    }
};
