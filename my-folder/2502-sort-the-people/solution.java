class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        for(int i=0;i<heights.length;i++){
            for(int j=0;j<heights.length-1-i;j++){
                if(heights[j]<heights[j+1]){
                    int temp=heights[j+1];
                    heights[j+1]=heights[j];
                    heights[j]=temp;
                    String tempName=names[j+1];
                    names[j+1]=names[j];
                    names[j]=tempName;
                }
            }
        }
        return names;
    }
}
