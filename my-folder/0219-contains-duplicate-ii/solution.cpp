class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        unordered_set<int>set;
        while(r<nums.size()){
            if(set.count(nums[r])) return true;
            set.insert(nums[r]);
            if(set.size()>k){
                set.erase(nums[l]);
                l++;
            }
            r++;
        }
        return false;
    }
};
