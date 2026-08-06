class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n=grid.length;
        int size=n*n;
        int[] freq=new int [size+1];
        for(int[] row:grid){
            for(int num:row){
                freq[num]++;
            }
        }
        int rep=-1;
        int mis=-1;
        for(int i=1;i<=size;i++){
            if(freq[i]==0) mis=i;
            if(freq[i]>1) rep=i;
        }
        return new int[]{rep,mis};
    }
}
