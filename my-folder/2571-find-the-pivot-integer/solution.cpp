class Solution {
public:
    int pivotInteger(int n) {
        int left=1,right=n;
        int leftsum=1,rightsum=n;
        while(left<right){
            if(leftsum<rightsum){
                left++;
                leftsum+=left;
            }
            else{
                right--;
                rightsum+=right;
            }
        }   
        if(left==right&&leftsum==rightsum) return left;
        return -1;
    }
};
