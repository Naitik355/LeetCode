class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans=0;
        vector<int>extra(customers.size(),0);
        for(int i=0;i<customers.size();i++){
            if(grumpy[i]==0) ans+=customers[i];
            extra[i]=grumpy[i]==1?customers[i]:0;
        }
        int extraSum=0;
        for(int i=0;i<minutes;i++){
            extraSum+=extra[i];
        }
        int maxSum=extraSum;
        for(int i=minutes;i<extra.size();i++){
            extraSum=extraSum+extra[i];
            extraSum=extraSum-extra[i-minutes];
            maxSum=max(maxSum,extraSum);
        }
        ans+=maxSum;
        return ans;
    }
};
