class Solution {
public:
    int nextIndex(vector<int>nums,int i){
        int n=nums.size();
        int next=((i+nums[i])%n+n)%n;
        return next;
    }
    bool circularArrayLoop(vector<int>& nums) {
        for(int start=0;start<nums.size();start++){
            if(nums[start]==0) continue;
            int slow=start;
            int fast=start;
            bool positive=nums[start]>0;
           
            while(true){
                int slowNext=nextIndex(nums,slow);
                int fastNext=nextIndex(nums,fast);
                int fastNextNext=nextIndex(nums,fastNext);
                if((nums[slow]>0)!=positive || (nums[fast]>0)!=positive || (nums[fastNext]>0)!=positive||(nums[fastNextNext]>0)!=positive  ) break;
                if(slow==slowNext || fast==fastNext || fastNext==fastNextNext) break;

                slow=slowNext;
                fast=fastNextNext;
                if(slow==fast) return true;
            }
                int current=start;
                while(nums[current]!=0 && (nums[current]>0)==positive){
                    int next=nextIndex(nums,current);
                    nums[current]=0;
                    current=next;
                }
        }
        return false;
    }
};
