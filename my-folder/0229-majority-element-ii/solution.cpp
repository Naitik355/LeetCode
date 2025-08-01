class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int>v;
        for(int num:nums){
            count[num]++;
        }
        for(auto& pair:count){
            if(pair.second>(nums.size()/3))
                v.push_back(pair.first);
        }
        return v;
    }
};
