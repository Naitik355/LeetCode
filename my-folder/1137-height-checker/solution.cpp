class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>expected=heights;
        for(int i=0;i<heights.size();i++){
            for(int j=0;j<heights.size()-i-1;j++){
                if(heights[j]>heights[j+1]){
                    int temp=heights[j+1];
                    heights[j+1]=heights[j];
                    
                    heights[j]=temp;
                }
            }
        }
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=expected[i])count++;
        }
        return count;
    }

};
