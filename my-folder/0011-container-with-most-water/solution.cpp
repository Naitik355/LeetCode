class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int maxWater=0;
        while(lp<rp){
            int width=rp-lp;
            int minHeight=min(height[lp],height[rp]);
            int currWater=width*minHeight;
            maxWater=max(maxWater,currWater);
            if(height[lp]>height[rp]){
                rp--;
            }
            else{
                lp++;
            }
        }
        return maxWater;
    }
};
