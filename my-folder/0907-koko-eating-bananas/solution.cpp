class Solution {
public:
    long long hrs(vector<int>& piles,int hour){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total += ceil((double)piles[i] / hour);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalhr=hrs(piles,mid);
            if(totalhr<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
