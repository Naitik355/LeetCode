class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int size=n*n;
        vector<int>freq(size+1,0);
        for(auto& row:grid){
            for(int num:row){
                freq[num]++;
            }
        }
        vector<int>ans;
        int rep=-1;
        int mis=-1;
        for(int i=0;i<freq.size();i++){
            if(freq[i]==0) mis=i;
            if(freq[i]>1) rep=i;
        }
        ans.push_back(rep);
        ans.push_back(mis);
        return ans;
    }
};
