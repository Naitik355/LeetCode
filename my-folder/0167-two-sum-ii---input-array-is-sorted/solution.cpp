class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int sum1=0;
        int right=(numbers.size()-1);
        while (left<right){
            sum1=numbers[left]+numbers[right];
            if (sum1==target){
                return {left+1,right+1};
            }
            else if (sum1<target){
                left+=1;
            }
            else{
                right-=1;
            }
        }
        return {};
    }
};
