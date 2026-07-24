class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int count=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]+1){
                count++;
            }
            else {
                count=1;
            }
            if(i>=k-1){
                if(count>=k) ans.push_back(nums[i]);
            
                else{
                    ans.push_back(-1);
                }
            }
        }
        return ans;
    }   
};
