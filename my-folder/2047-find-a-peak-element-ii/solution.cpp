class Solution {
public:
    int findMax(vector<vector<int>>& mat,int n,int m , int col){
        int index=-1;
        int maxVal=-1;
        for(int i=0;i<n;i++){
            if(mat[i][col]>maxVal){
                maxVal=mat[i][col];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int maxel=findMax(mat,n,m,mid);
            int left=mid-1>=0?mat[maxel][mid-1]:-1;
            int right=mid+1<m?mat[maxel][mid+1]:-1;
            if(mat[maxel][mid]>left && mat[maxel][mid]>right){
                return {maxel,mid};
            }
            else if(mat[maxel][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }   
        return {-1,-1};
    }
};
