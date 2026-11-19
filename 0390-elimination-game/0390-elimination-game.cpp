class Solution {
public:
    int helper(int start,int step,int count,bool dir){
        if(count<2){
            return start;
        }
        if(dir||count%2==1) start+=step;
        step*=2;
        count/=2;
        dir= !dir;
        return helper(start,step,count,dir);

    }
    int lastRemaining(int n) {
        
        return helper(1,1,n,true);
    }
};