class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        while(nums.size()!=0){
            int alice= *min_element(nums.begin(), nums.end());
            auto it=find(nums.begin(),nums.end(),alice);
            nums.erase(it);
            int bob=*min_element(nums.begin(), nums.end());
            auto ab=find(nums.begin(),nums.end(),bob);
            nums.erase(ab);
            ans.push_back(bob);
            ans.push_back(alice);
        }
            return ans;
    }
};
