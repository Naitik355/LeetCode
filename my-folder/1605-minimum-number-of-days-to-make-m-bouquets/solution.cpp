class Solution {
public:

    bool possible(vector<int>& bloomDay,int day,int m,int k){
        int count=0;
        int bouqets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                bouqets+=count/k;
                count=0;
            }
        }
        bouqets+=count/k;
        if(bouqets>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        long long p=(long long)m*k;
        if(bloomDay.size()<p)return -1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((possible(bloomDay,mid,m,k))==true){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
