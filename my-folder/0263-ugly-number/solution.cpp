class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        int arr[3]={2,3,5};
        for(int v:arr){
            while(n%v==0) n/=v;
        }
        return n==1;
    }
};
